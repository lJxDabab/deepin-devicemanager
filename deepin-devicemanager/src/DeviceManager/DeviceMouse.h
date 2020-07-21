/**
* @brief: 鼠标设备信息
* @class[DeviceMouse]: 一个DeviceMouse的实例 表示的就是一个鼠标设备
* @author: liujun
* @date:2020-04-09
*/

#ifndef DEVICEMOUSE_H
#define DEVICEMOUSE_H
#include"DeviceInfo.h"


// 鼠标设备信息
class DeviceMouse : public DeviceBaseInfo
{
    Q_OBJECT
    Q_DISABLE_COPY(DeviceMouse)
public:
    DeviceMouse();

    /**
     * @brief setInfoFromHwinfo:设置由hwinfo --mouse 命令获取的设备信息
     * @param mapInfo:由hwinfo获取的信息map
     */
    void setInfoFromHwinfo(QMap<QString, QString> mapInfo);

    /**
     * @brief setInfoFromlshw:设置从lshw里面获取的信息
     * @param mapInfo:由lshw获取的信息map
     * @return 布尔值，true:信息设置成功；false:信息设置失败
     */
    bool setInfoFromlshw(QMap<QString, QString> mapInfo);

    /**
     * @brief name:获取名称属性值
     * @return QString 名称属性值
     */
    const QString &name()const;

    /**
     * @brief vendor:获取制造商属性值
     * @return QString:制造商属性值
     */
    const QString &vendor()const;

    /**
     * @brief model:获取型号属性值
     * @return QString:型号属性值
     */
    const QString &model()const;

    /**
     * @brief interface:获取接口属性值
     * @return QString:接口属性值
     */
    const QString &interface()const;

    /**
     * @brief busInfo:获取总线信息属性值
     * @return QString:总线信息属性值
     */
    const QString &busInfo()const;

    /**
       * @brief version:获取版本号属性值
       * @return QString:版本号属性值
       */
    const QString &version()const;

    /**
       * @brief capabilities:获取功能属性值
       * @return QString:功能属性值
       */
    const QString &capability()const;

    /**
     * @brief driver:获取驱动属性值
     * @return QString:驱动属性值
     */
    const QString &driver()const;

    /**
     * @brief maxPower:获取最大功耗属性值
     * @return QString:最大功耗属性值
     */
    const QString &maxPower()const;

    /**
     * @brief speed:获取速度属性值
     * @return QString:速度属性值
     */
    const QString &speed()const;

protected:

    /**
     * @brief initFilterKey:初始化可现实的可显示的属性,m_FilterKey
     */
    void initFilterKey() override;

    /**
     * @brief loadBaseDeviceInfo:加载基本信息
     */
    void loadBaseDeviceInfo() override;

    /**
     * @brief loadOtherDeviceInfo:加载基本信息
     */
    void loadOtherDeviceInfo() override;

    /**
     * @brief loadTableData:加载表头信息
     */
    void loadTableData() override;

private:
    QString     m_Name;                             //<! 名称    #制造商+型号#
    QString     m_Vendor;                           //<! 制造商
    QString     m_Model;                            //<! 型号
    QString     m_Interface;                        //<! 接口
    QString     m_BusInfo;                          //<! 总线信息
    QString     m_Version;                          //<! 版本
    QString     m_Capabilities;                     //<! 功能
    QString     m_Driver;                           //<! 驱动
    QString     m_MaximumPower;                     //<! 最大功耗
    QString     m_Speed;                            //<! 速度

    /*通过该标识匹配从 cat /proc/bus/input/devices 中获取的信息 */
    QString     m_KeysToCatDevices;

    /*通过该标识匹配从 lshw 中获取的信息*/
    QString     m_KeyToLshw;
};

#endif // DEVICEMOUSE_H