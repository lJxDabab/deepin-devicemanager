#include "PageTableHeader.h"


#include <QHBoxLayout>
#include <QMenu>
#include <QPainter>
#include <QDebug>

#include <DFontSizeManager>
#include <DStandardItem>
#include <DApplication>
#include <DApplicationHelper>

#include "TableWidget.h"
#include "MacroDefinition.h"

PageTableHeader::PageTableHeader(QWidget *parent)
    : DWidget(parent)
    , mp_Table(new TableWidget(this))
    , mp_Refresh(new QAction(QIcon::fromTheme("view-refresh"), tr("Refresh (F5)"), this))
    , mp_Export(new QAction(QIcon::fromTheme("document-new"), tr("Export (E)"), this))
    , mp_Copy(new QAction(QIcon::fromTheme("edit-copy"), tr("Copy (C)"), this))
    , mp_Menu(new DMenu(this))
{
    initWidgets();
}

PageTableHeader::~PageTableHeader()
{
    DELETE_PTR(mp_Refresh);
    DELETE_PTR(mp_Export);
    DELETE_PTR(mp_Copy);
    DELETE_PTR(mp_Menu);
}

void PageTableHeader::initWidgets()
{
    // 布局
    QHBoxLayout *hLayout = new QHBoxLayout(this);
    hLayout->setContentsMargins(10, 10, 10, 10);
    hLayout->addWidget(mp_Table);
    setLayout(hLayout);

    mp_Table->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(mp_Table, SIGNAL(customContextMenuRequested(const QPoint &)),
            this, SLOT(slotShowMenu(const QPoint &)));
    connect(mp_Copy, &QAction::triggered, this, &PageTableHeader::slotActionCopy);
    connect(mp_Refresh, &QAction::triggered, this, &PageTableHeader::slotActionRefresh);
    connect(mp_Export, &QAction::triggered, this, &PageTableHeader::slotActionExport);
}

void PageTableHeader::updateTable(const QList<QStringList> &lst)
{
    // 提前清楚内容
    mp_Table->clear();

    // 如果lst.size() == 1 则说明改设备只有一个
    if (lst.size() == 1) {
        return;
    }

    // 设置表头
    mp_Table->setHeaderLabels(lst[0]);

    // 设置表格的内容
    int row = lst.size();
    int column = lst[0].size();
    for (int i = 0; i < row - 1; i++) {
        for (int j = 0; j < column; j++) {
            DStandardItem *item = new DStandardItem(lst[i + 1][j]);
            mp_Table->setItem(i, j, item);
        }
    }

}


void PageTableHeader::paintEvent(QPaintEvent *e)
{
    DWidget::paintEvent(e);
}


void PageTableHeader::slotShowMenu(const QPoint &)
{
    mp_Menu->clear();
    mp_Menu->addAction(mp_Copy);
    mp_Menu->addSeparator();
    mp_Menu->addAction(mp_Refresh);
    mp_Menu->addAction(mp_Export);
    mp_Menu->exec(QCursor::pos());
}
void PageTableHeader::slotActionRefresh()
{

}
void PageTableHeader::slotActionExport()
{

}
void PageTableHeader::slotActionCopy()
{

}

