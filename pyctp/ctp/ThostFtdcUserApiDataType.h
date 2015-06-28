﻿#ifndef THOST_FTDCDATATYPE_H
#define THOST_FTDCDATATYPE_H

enum THOST_TE_RESUME_TYPE {
    THOST_TERT_RESTART = 0,
    THOST_TERT_RESUME,
    THOST_TERT_QUICK
};


///TFtdcTraderIDType是一个交易所交易员代码类型

typedef char TThostFtdcTraderIDType[21];


///TFtdcInvestorIDType是一个投资者代码类型

typedef char TThostFtdcInvestorIDType[13];


///TFtdcBrokerIDType是一个经纪公司代码类型

typedef char TThostFtdcBrokerIDType[11];


///TFtdcBrokerAbbrType是一个经纪公司简称类型

typedef char TThostFtdcBrokerAbbrType[9];


///TFtdcBrokerNameType是一个经纪公司名称类型

typedef char TThostFtdcBrokerNameType[81];


///TFtdcExchangeInstIDType是一个合约在交易所的代码类型

typedef char TThostFtdcExchangeInstIDType[31];


///TFtdcOrderRefType是一个报单引用类型

typedef char TThostFtdcOrderRefType[13];


///TFtdcParticipantIDType是一个会员代码类型

typedef char TThostFtdcParticipantIDType[11];


///TFtdcUserIDType是一个用户代码类型

typedef char TThostFtdcUserIDType[16];


///TFtdcPasswordType是一个密码类型

typedef char TThostFtdcPasswordType[41];


///TFtdcClientIDType是一个交易编码类型

typedef char TThostFtdcClientIDType[11];


///TFtdcInstrumentIDType是一个合约代码类型

typedef char TThostFtdcInstrumentIDType[31];


///TFtdcMarketIDType是一个市场代码类型

typedef char TThostFtdcMarketIDType[31];


///TFtdcProductNameType是一个产品名称类型

typedef char TThostFtdcProductNameType[21];


///TFtdcExchangeIDType是一个交易所代码类型

typedef char TThostFtdcExchangeIDType[9];


///TFtdcExchangeNameType是一个交易所名称类型

typedef char TThostFtdcExchangeNameType[61];


///TFtdcExchangeAbbrType是一个交易所简称类型

typedef char TThostFtdcExchangeAbbrType[9];


///TFtdcExchangeFlagType是一个交易所标志类型

typedef char TThostFtdcExchangeFlagType[2];


///TFtdcMacAddressType是一个Mac地址类型

typedef char TThostFtdcMacAddressType[21];


///TFtdcSystemIDType是一个系统编号类型

typedef char TThostFtdcSystemIDType[21];


///TFtdcExchangePropertyType是一个交易所属性类型

///正常
#define THOST_FTDC_EXP_Normal '0'
///根据成交生成报单
#define THOST_FTDC_EXP_GenOrderByTrade '1'

typedef char TThostFtdcExchangePropertyType;


///TFtdcDateType是一个日期类型

typedef char TThostFtdcDateType[9];


///TFtdcTimeType是一个时间类型

typedef char TThostFtdcTimeType[9];


///TFtdcLongTimeType是一个长时间类型

typedef char TThostFtdcLongTimeType[13];


///TFtdcInstrumentNameType是一个合约名称类型

typedef char TThostFtdcInstrumentNameType[21];


///TFtdcSettlementGroupIDType是一个结算组代码类型

typedef char TThostFtdcSettlementGroupIDType[9];


///TFtdcOrderSysIDType是一个报单编号类型

typedef char TThostFtdcOrderSysIDType[21];


///TFtdcTradeIDType是一个成交编号类型

typedef char TThostFtdcTradeIDType[21];


///TFtdcCommandTypeType是一个DB命令类型类型

typedef char TThostFtdcCommandTypeType[65];


///TFtdcIPAddressType是一个IP地址类型

typedef char TThostFtdcIPAddressType[16];


///TFtdcIPPortType是一个IP端口类型

typedef int TThostFtdcIPPortType;


///TFtdcProductInfoType是一个产品信息类型

typedef char TThostFtdcProductInfoType[11];


///TFtdcProtocolInfoType是一个协议信息类型

typedef char TThostFtdcProtocolInfoType[11];


///TFtdcBusinessUnitType是一个业务单元类型

typedef char TThostFtdcBusinessUnitType[21];


///TFtdcDepositSeqNoType是一个出入金流水号类型

typedef char TThostFtdcDepositSeqNoType[15];


///TFtdcIdentifiedCardNoType是一个证件号码类型

typedef char TThostFtdcIdentifiedCardNoType[51];


///TFtdcIdCardTypeType是一个证件类型类型

///组织机构代码
#define THOST_FTDC_ICT_EID '0'
///中国公民身份证
#define THOST_FTDC_ICT_IDCard '1'
///军官证
#define THOST_FTDC_ICT_OfficerIDCard '2'
///警官证
#define THOST_FTDC_ICT_PoliceIDCard '3'
///士兵证
#define THOST_FTDC_ICT_SoldierIDCard '4'
///户口簿
#define THOST_FTDC_ICT_HouseholdRegister  '5'
///护照
#define THOST_FTDC_ICT_Passport '6'
///台胞证
#define THOST_FTDC_ICT_TaiwanCompatriotIDCard  '7'
///回乡证
#define THOST_FTDC_ICT_HomeComingCard '8'
///营业执照号
#define THOST_FTDC_ICT_LicenseNo '9'
///税务登记号/当地纳税ID
#define THOST_FTDC_ICT_TaxNo 'A'
///港澳居民来往内地通行证
#define THOST_FTDC_ICT_HMMainlandTravelPermit  'B'
///台湾居民来往大陆通行证
#define THOST_FTDC_ICT_TwMainlandTravelPermit 'C'
///驾照
#define THOST_FTDC_ICT_DrivingLicense 'D'
///当地社保ID
#define THOST_FTDC_ICT_SocialID 'F'
///当地身份证
#define THOST_FTDC_ICT_LocalID 'G'
///商业登记证
#define THOST_FTDC_ICT_BusinessRegistration  'H'
///港澳永久性居民身份证
#define THOST_FTDC_ICT_HKMCIDCard 'I'
///人行开户许可证
#define THOST_FTDC_ICT_AccountsPermits 'J'
///其他证件
#define THOST_FTDC_ICT_OtherCard 'x'

typedef char TThostFtdcIdCardTypeType;


///TFtdcOrderLocalIDType是一个本地报单编号类型

typedef char TThostFtdcOrderLocalIDType[13];


///TFtdcUserNameType是一个用户名称类型

typedef char TThostFtdcUserNameType[81];


///TFtdcPartyNameType是一个参与人名称类型

typedef char TThostFtdcPartyNameType[81];


///TFtdcErrorMsgType是一个错误信息类型

typedef char TThostFtdcErrorMsgType[81];


///TFtdcFieldNameType是一个字段名类型

typedef char TThostFtdcFieldNameType[2049];


///TFtdcFieldContentType是一个字段内容类型

typedef char TThostFtdcFieldContentType[2049];


///TFtdcSystemNameType是一个系统名称类型

typedef char TThostFtdcSystemNameType[41];


///TFtdcContentType是一个消息正文类型

typedef char TThostFtdcContentType[501];


///TFtdcInvestorRangeType是一个投资者范围类型

///所有
#define THOST_FTDC_IR_All '1'
///投资者组
#define THOST_FTDC_IR_Group '2'
///单一投资者
#define THOST_FTDC_IR_Single '3'

typedef char TThostFtdcInvestorRangeType;


///TFtdcDepartmentRangeType是一个投资者范围类型

///所有
#define THOST_FTDC_DR_All '1'
///组织架构
#define THOST_FTDC_DR_Group '2'
///单一投资者
#define THOST_FTDC_DR_Single '3'

typedef char TThostFtdcDepartmentRangeType;


///TFtdcDataSyncStatusType是一个数据同步状态类型

///未同步
#define THOST_FTDC_DS_Asynchronous '1'
///同步中
#define THOST_FTDC_DS_Synchronizing '2'
///已同步
#define THOST_FTDC_DS_Synchronized '3'

typedef char TThostFtdcDataSyncStatusType;


///TFtdcBrokerDataSyncStatusType是一个经纪公司数据同步状态类型

///已同步
#define THOST_FTDC_BDS_Synchronized '1'
///同步中
#define THOST_FTDC_BDS_Synchronizing '2'

typedef char TThostFtdcBrokerDataSyncStatusType;


///TFtdcExchangeConnectStatusType是一个交易所连接状态类型

///没有任何连接
#define THOST_FTDC_ECS_NoConnection '1'
///已经发出合约查询请求
#define THOST_FTDC_ECS_QryInstrumentSent '2'
///已经获取信息
#define THOST_FTDC_ECS_GotInformation '9'

typedef char TThostFtdcExchangeConnectStatusType;


///TFtdcTraderConnectStatusType是一个交易所交易员连接状态类型

///没有任何连接
#define THOST_FTDC_TCS_NotConnected '1'
///已经连接
#define THOST_FTDC_TCS_Connected '2'
///已经发出合约查询请求
#define THOST_FTDC_TCS_QryInstrumentSent '3'
///订阅私有流
#define THOST_FTDC_TCS_SubPrivateFlow '4'

typedef char TThostFtdcTraderConnectStatusType;


///TFtdcFunctionCodeType是一个功能代码类型

///数据异步化
#define THOST_FTDC_FC_DataAsync '1'
///强制用户登出
#define THOST_FTDC_FC_ForceUserLogout '2'
///变更管理用户口令
#define THOST_FTDC_FC_UserPasswordUpdate '3'
///变更经纪公司口令
#define THOST_FTDC_FC_BrokerPasswordUpdate '4'
///变更投资者口令
#define THOST_FTDC_FC_InvestorPasswordUpdate '5'
///报单插入
#define THOST_FTDC_FC_OrderInsert '6'
///报单操作
#define THOST_FTDC_FC_OrderAction '7'
///同步系统数据
#define THOST_FTDC_FC_SyncSystemData '8'
///同步经纪公司数据
#define THOST_FTDC_FC_SyncBrokerData '9'
///批量同步经纪公司数据
#define THOST_FTDC_FC_BachSyncBrokerData 'A'
///超级查询
#define THOST_FTDC_FC_SuperQuery 'B'
///预埋报单插入
#define THOST_FTDC_FC_ParkedOrderInsert 'C'
///预埋报单操作
#define THOST_FTDC_FC_ParkedOrderAction 'D'
///同步动态令牌
#define THOST_FTDC_FC_SyncOTP 'E'
///删除未知单
#define THOST_FTDC_FC_DeleteOrder 'F'

typedef char TThostFtdcFunctionCodeType;


///TFtdcBrokerFunctionCodeType是一个经纪公司功能代码类型

///强制用户登出
#define THOST_FTDC_BFC_ForceUserLogout '1'
///变更用户口令
#define THOST_FTDC_BFC_UserPasswordUpdate '2'
///同步经纪公司数据
#define THOST_FTDC_BFC_SyncBrokerData '3'
///批量同步经纪公司数据
#define THOST_FTDC_BFC_BachSyncBrokerData '4'
///报单插入
#define THOST_FTDC_BFC_OrderInsert '5'
///报单操作
#define THOST_FTDC_BFC_OrderAction '6'
///全部查询
#define THOST_FTDC_BFC_AllQuery '7'
///系统功能：登入/登出/修改密码等
#define THOST_FTDC_BFC_log 'a'
///基本查询：查询基础数据，如合约，交易所等常量
#define THOST_FTDC_BFC_BaseQry 'b'
///交易查询：如查成交，委托
#define THOST_FTDC_BFC_TradeQry 'c'
///交易功能：报单，撤单
#define THOST_FTDC_BFC_Trade 'd'
///银期转账
#define THOST_FTDC_BFC_Virement 'e'
///风险监控
#define THOST_FTDC_BFC_Risk 'f'
///查询/管理：查询会话，踢人等
#define THOST_FTDC_BFC_Session 'g'
///风控通知控制
#define THOST_FTDC_BFC_RiskNoticeCtl 'h'
///风控通知发送
#define THOST_FTDC_BFC_RiskNotice 'i'
///察看经纪公司资金权限
#define THOST_FTDC_BFC_BrokerDeposit 'j'
///资金查询
#define THOST_FTDC_BFC_QueryFund 'k'
///报单查询
#define THOST_FTDC_BFC_QueryOrder 'l'
///成交查询
#define THOST_FTDC_BFC_QueryTrade 'm'
///持仓查询
#define THOST_FTDC_BFC_QueryPosition 'n'
///行情查询
#define THOST_FTDC_BFC_QueryMarketData 'o'
///用户事件查询
#define THOST_FTDC_BFC_QueryUserEvent 'p'
///风险通知查询
#define THOST_FTDC_BFC_QueryRiskNotify 'q'
///出入金查询
#define THOST_FTDC_BFC_QueryFundChange 'r'
///投资者信息查询
#define THOST_FTDC_BFC_QueryInvestor 's'
///交易编码查询
#define THOST_FTDC_BFC_QueryTradingCode 't'
///强平
#define THOST_FTDC_BFC_ForceClose 'u'
///压力测试
#define THOST_FTDC_BFC_PressTest 'v'
///权益反算
#define THOST_FTDC_BFC_RemainCalc 'w'
///净持仓保证金指标
#define THOST_FTDC_BFC_NetPositionInd 'x'
///风险预算
#define THOST_FTDC_BFC_RiskPredict 'y'
///数据导出
#define THOST_FTDC_BFC_DataExport 'z'
///风控指标设置
#define THOST_FTDC_BFC_RiskTargetSetup 'A'
///行情预警
#define THOST_FTDC_BFC_MarketDataWarn 'B'
///业务通知查询
#define THOST_FTDC_BFC_QryBizNotice 'C'
///业务通知模板设置
#define THOST_FTDC_BFC_CfgBizNotice 'D'
///同步动态令牌
#define THOST_FTDC_BFC_SyncOTP 'E'
///发送业务通知
#define THOST_FTDC_BFC_SendBizNotice 'F'
///风险级别标准设置
#define THOST_FTDC_BFC_CfgRiskLevelStd 'G'
///交易终端应急功能
#define THOST_FTDC_BFC_TbCommand 'H'
///删除未知单
#define THOST_FTDC_BFC_DeleteOrder 'J'
///预埋报单插入
#define THOST_FTDC_BFC_ParkedOrderInsert 'K'
///预埋报单操作
#define THOST_FTDC_BFC_ParkedOrderAction 'L'

typedef char TThostFtdcBrokerFunctionCodeType;


///TFtdcOrderActionStatusType是一个报单操作状态类型

///已经提交
#define THOST_FTDC_OAS_Submitted 'a'
///已经接受
#define THOST_FTDC_OAS_Accepted 'b'
///已经被拒绝
#define THOST_FTDC_OAS_Rejected 'c'

typedef char TThostFtdcOrderActionStatusType;


///TFtdcOrderStatusType是一个报单状态类型

///全部成交
#define THOST_FTDC_OST_AllTraded '0'
///部分成交还在队列中
#define THOST_FTDC_OST_PartTradedQueueing '1'
///部分成交不在队列中
#define THOST_FTDC_OST_PartTradedNotQueueing '2'
///未成交还在队列中
#define THOST_FTDC_OST_NoTradeQueueing '3'
///未成交不在队列中
#define THOST_FTDC_OST_NoTradeNotQueueing '4'
///撤单
#define THOST_FTDC_OST_Canceled '5'
///未知
#define THOST_FTDC_OST_Unknown 'a'
///尚未触发
#define THOST_FTDC_OST_NotTouched 'b'
///已触发
#define THOST_FTDC_OST_Touched 'c'

typedef char TThostFtdcOrderStatusType;


///TFtdcOrderSubmitStatusType是一个报单提交状态类型

///已经提交
#define THOST_FTDC_OSS_InsertSubmitted '0'
///撤单已经提交
#define THOST_FTDC_OSS_CancelSubmitted '1'
///修改已经提交
#define THOST_FTDC_OSS_ModifySubmitted '2'
///已经接受
#define THOST_FTDC_OSS_Accepted '3'
///报单已经被拒绝
#define THOST_FTDC_OSS_InsertRejected '4'
///撤单已经被拒绝
#define THOST_FTDC_OSS_CancelRejected '5'
///改单已经被拒绝
#define THOST_FTDC_OSS_ModifyRejected '6'

typedef char TThostFtdcOrderSubmitStatusType;


///TFtdcPositionDateType是一个持仓日期类型

///今日持仓
#define THOST_FTDC_PSD_Today '1'
///历史持仓
#define THOST_FTDC_PSD_History '2'

typedef char TThostFtdcPositionDateType;


///TFtdcPositionDateTypeType是一个持仓日期类型类型

///使用历史持仓
#define THOST_FTDC_PDT_UseHistory '1'
///不使用历史持仓
#define THOST_FTDC_PDT_NoUseHistory '2'

typedef char TThostFtdcPositionDateTypeType;


///TFtdcTradingRoleType是一个交易角色类型

///代理
#define THOST_FTDC_ER_Broker '1'
///自营
#define THOST_FTDC_ER_Host '2'
///做市商
#define THOST_FTDC_ER_Maker '3'

typedef char TThostFtdcTradingRoleType;


///TFtdcProductClassType是一个产品类型类型

///期货
#define THOST_FTDC_PC_Futures '1'
///期货期权
#define THOST_FTDC_PC_Options '2'
///组合
#define THOST_FTDC_PC_Combination '3'
///即期
#define THOST_FTDC_PC_Spot '4'
///期转现
#define THOST_FTDC_PC_EFP '5'
///现货期权
#define THOST_FTDC_PC_SpotOption '6'

typedef char TThostFtdcProductClassType;


///TFtdcInstLifePhaseType是一个合约生命周期状态类型

///未上市
#define THOST_FTDC_IP_NotStart '0'
///上市
#define THOST_FTDC_IP_Started '1'
///停牌
#define THOST_FTDC_IP_Pause '2'
///到期
#define THOST_FTDC_IP_Expired '3'

typedef char TThostFtdcInstLifePhaseType;


///TFtdcDirectionType是一个买卖方向类型

///买
#define THOST_FTDC_D_Buy '0'
///卖
#define THOST_FTDC_D_Sell '1'

typedef char TThostFtdcDirectionType;


///TFtdcPositionTypeType是一个持仓类型类型

///净持仓
#define THOST_FTDC_PT_Net '1'
///综合持仓
#define THOST_FTDC_PT_Gross '2'

typedef char TThostFtdcPositionTypeType;


///TFtdcPosiDirectionType是一个持仓多空方向类型

///净
#define THOST_FTDC_PD_Net '1'
///多头
#define THOST_FTDC_PD_Long '2'
///空头
#define THOST_FTDC_PD_Short '3'

typedef char TThostFtdcPosiDirectionType;


///TFtdcSysSettlementStatusType是一个系统结算状态类型

///不活跃
#define THOST_FTDC_SS_NonActive '1'
///启动
#define THOST_FTDC_SS_Startup '2'
///操作
#define THOST_FTDC_SS_Operating '3'
///结算
#define THOST_FTDC_SS_Settlement '4'
///结算完成
#define THOST_FTDC_SS_SettlementFinished '5'

typedef char TThostFtdcSysSettlementStatusType;


///TFtdcRatioAttrType是一个费率属性类型

///交易费率
#define THOST_FTDC_RA_Trade '0'
///结算费率
#define THOST_FTDC_RA_Settlement '1'

typedef char TThostFtdcRatioAttrType;


///TFtdcHedgeFlagType是一个投机套保标志类型

///投机
#define THOST_FTDC_HF_Speculation '1'
///套利
#define THOST_FTDC_HF_Arbitrage '2'
///套保
#define THOST_FTDC_HF_Hedge '3'

typedef char TThostFtdcHedgeFlagType;


///TFtdcBillHedgeFlagType是一个投机套保标志类型

///投机
#define THOST_FTDC_BHF_Speculation '1'
///套利
#define THOST_FTDC_BHF_Arbitrage '2'
///套保
#define THOST_FTDC_BHF_Hedge '3'

typedef char TThostFtdcBillHedgeFlagType;


///TFtdcClientIDTypeType是一个交易编码类型类型

///投机
#define THOST_FTDC_CIDT_Speculation '1'
///套利
#define THOST_FTDC_CIDT_Arbitrage '2'
///套保
#define THOST_FTDC_CIDT_Hedge '3'

typedef char TThostFtdcClientIDTypeType;


///TFtdcOrderPriceTypeType是一个报单价格条件类型

///任意价
#define THOST_FTDC_OPT_AnyPrice '1'
///限价
#define THOST_FTDC_OPT_LimitPrice '2'
///最优价
#define THOST_FTDC_OPT_BestPrice '3'
///最新价
#define THOST_FTDC_OPT_LastPrice '4'
///最新价浮动上浮1个ticks
#define THOST_FTDC_OPT_LastPricePlusOneTicks '5'
///最新价浮动上浮2个ticks
#define THOST_FTDC_OPT_LastPricePlusTwoTicks '6'
///最新价浮动上浮3个ticks
#define THOST_FTDC_OPT_LastPricePlusThreeTicks '7'
///卖一价
#define THOST_FTDC_OPT_AskPrice1 '8'
///卖一价浮动上浮1个ticks
#define THOST_FTDC_OPT_AskPrice1PlusOneTicks '9'
///卖一价浮动上浮2个ticks
#define THOST_FTDC_OPT_AskPrice1PlusTwoTicks 'A'
///卖一价浮动上浮3个ticks
#define THOST_FTDC_OPT_AskPrice1PlusThreeTicks 'B'
///买一价
#define THOST_FTDC_OPT_BidPrice1 'C'
///买一价浮动上浮1个ticks
#define THOST_FTDC_OPT_BidPrice1PlusOneTicks 'D'
///买一价浮动上浮2个ticks
#define THOST_FTDC_OPT_BidPrice1PlusTwoTicks 'E'
///买一价浮动上浮3个ticks
#define THOST_FTDC_OPT_BidPrice1PlusThreeTicks 'F'
///五档价
#define THOST_FTDC_OPT_FiveLevelPrice 'G'

typedef char TThostFtdcOrderPriceTypeType;


///TFtdcOffsetFlagType是一个开平标志类型

///开仓
#define THOST_FTDC_OF_Open '0'
///平仓
#define THOST_FTDC_OF_Close '1'
///强平
#define THOST_FTDC_OF_ForceClose '2'
///平今
#define THOST_FTDC_OF_CloseToday '3'
///平昨
#define THOST_FTDC_OF_CloseYesterday '4'
///强减
#define THOST_FTDC_OF_ForceOff '5'
///本地强平
#define THOST_FTDC_OF_LocalForceClose '6'

typedef char TThostFtdcOffsetFlagType;


///TFtdcForceCloseReasonType是一个强平原因类型

///非强平
#define THOST_FTDC_FCC_NotForceClose '0'
///资金不足
#define THOST_FTDC_FCC_LackDeposit '1'
///客户超仓
#define THOST_FTDC_FCC_ClientOverPositionLimit '2'
///会员超仓
#define THOST_FTDC_FCC_MemberOverPositionLimit '3'
///持仓非整数倍
#define THOST_FTDC_FCC_NotMultiple '4'
///违规
#define THOST_FTDC_FCC_Violation '5'
///其它
#define THOST_FTDC_FCC_Other '6'
///自然人临近交割
#define THOST_FTDC_FCC_PersonDeliv '7'

typedef char TThostFtdcForceCloseReasonType;


///TFtdcOrderTypeType是一个报单类型类型

///正常
#define THOST_FTDC_ORDT_Normal '0'
///报价衍生
#define THOST_FTDC_ORDT_DeriveFromQuote '1'
///组合衍生
#define THOST_FTDC_ORDT_DeriveFromCombination '2'
///组合报单
#define THOST_FTDC_ORDT_Combination '3'
///条件单
#define THOST_FTDC_ORDT_ConditionalOrder '4'
///互换单
#define THOST_FTDC_ORDT_Swap '5'

typedef char TThostFtdcOrderTypeType;


///TFtdcTimeConditionType是一个有效期类型类型

///立即完成，否则撤销
#define THOST_FTDC_TC_IOC '1'
///本节有效
#define THOST_FTDC_TC_GFS '2'
///当日有效
#define THOST_FTDC_TC_GFD '3'
///指定日期前有效
#define THOST_FTDC_TC_GTD '4'
///撤销前有效
#define THOST_FTDC_TC_GTC '5'
///集合竞价有效
#define THOST_FTDC_TC_GFA '6'

typedef char TThostFtdcTimeConditionType;


///TFtdcVolumeConditionType是一个成交量类型类型

///任何数量
#define THOST_FTDC_VC_AV '1'
///最小数量
#define THOST_FTDC_VC_MV '2'
///全部数量
#define THOST_FTDC_VC_CV '3'

typedef char TThostFtdcVolumeConditionType;


///TFtdcContingentConditionType是一个触发条件类型

///立即
#define THOST_FTDC_CC_Immediately '1'
///止损
#define THOST_FTDC_CC_Touch '2'
///止赢
#define THOST_FTDC_CC_TouchProfit '3'
///预埋单
#define THOST_FTDC_CC_ParkedOrder '4'
///最新价大于条件价
#define THOST_FTDC_CC_LastPriceGreaterThanStopPrice '5'
///最新价大于等于条件价
#define THOST_FTDC_CC_LastPriceGreaterEqualStopPrice '6'
///最新价小于条件价
#define THOST_FTDC_CC_LastPriceLesserThanStopPrice '7'
///最新价小于等于条件价
#define THOST_FTDC_CC_LastPriceLesserEqualStopPrice '8'
///卖一价大于条件价
#define THOST_FTDC_CC_AskPriceGreaterThanStopPrice '9'
///卖一价大于等于条件价
#define THOST_FTDC_CC_AskPriceGreaterEqualStopPrice 'A'
///卖一价小于条件价
#define THOST_FTDC_CC_AskPriceLesserThanStopPrice 'B'
///卖一价小于等于条件价
#define THOST_FTDC_CC_AskPriceLesserEqualStopPrice 'C'
///买一价大于条件价
#define THOST_FTDC_CC_BidPriceGreaterThanStopPrice 'D'
///买一价大于等于条件价
#define THOST_FTDC_CC_BidPriceGreaterEqualStopPrice 'E'
///买一价小于条件价
#define THOST_FTDC_CC_BidPriceLesserThanStopPrice 'F'
///买一价小于等于条件价
#define THOST_FTDC_CC_BidPriceLesserEqualStopPrice 'H'

typedef char TThostFtdcContingentConditionType;


///TFtdcActionFlagType是一个操作标志类型

///删除
#define THOST_FTDC_AF_Delete '0'
///修改
#define THOST_FTDC_AF_Modify '3'

typedef char TThostFtdcActionFlagType;


///TFtdcTradingRightType是一个交易权限类型

///可以交易
#define THOST_FTDC_TR_Allow '0'
///只能平仓
#define THOST_FTDC_TR_CloseOnly '1'
///不能交易
#define THOST_FTDC_TR_Forbidden '2'

typedef char TThostFtdcTradingRightType;


///TFtdcOrderSourceType是一个报单来源类型

///来自参与者
#define THOST_FTDC_OSRC_Participant '0'
///来自管理员
#define THOST_FTDC_OSRC_Administrator '1'

typedef char TThostFtdcOrderSourceType;


///TFtdcTradeTypeType是一个成交类型类型

///组合持仓拆分为单一持仓,初始化不应包含该类型的持仓
#define THOST_FTDC_TRDT_SplitCombination '#'
///普通成交
#define THOST_FTDC_TRDT_Common '0'
///期权执行
#define THOST_FTDC_TRDT_OptionsExecution '1'
///OTC成交
#define THOST_FTDC_TRDT_OTC '2'
///期转现衍生成交
#define THOST_FTDC_TRDT_EFPDerived '3'
///组合衍生成交
#define THOST_FTDC_TRDT_CombinationDerived '4'

typedef char TThostFtdcTradeTypeType;


///TFtdcPriceSourceType是一个成交价来源类型

///前成交价
#define THOST_FTDC_PSRC_LastPrice '0'
///买委托价
#define THOST_FTDC_PSRC_Buy '1'
///卖委托价
#define THOST_FTDC_PSRC_Sell '2'

typedef char TThostFtdcPriceSourceType;


///TFtdcInstrumentStatusType是一个合约交易状态类型

///开盘前
#define THOST_FTDC_IS_BeforeTrading '0'
///非交易
#define THOST_FTDC_IS_NoTrading '1'
///连续交易
#define THOST_FTDC_IS_Continous '2'
///集合竞价报单
#define THOST_FTDC_IS_AuctionOrdering '3'
///集合竞价价格平衡
#define THOST_FTDC_IS_AuctionBalance '4'
///集合竞价撮合
#define THOST_FTDC_IS_AuctionMatch '5'
///收盘
#define THOST_FTDC_IS_Closed '6'

typedef char TThostFtdcInstrumentStatusType;


///TFtdcInstStatusEnterReasonType是一个品种进入交易状态原因类型

///自动切换
#define THOST_FTDC_IER_Automatic '1'
///手动切换
#define THOST_FTDC_IER_Manual '2'
///熔断
#define THOST_FTDC_IER_Fuse '3'

typedef char TThostFtdcInstStatusEnterReasonType;


///TFtdcOrderActionRefType是一个报单操作引用类型

typedef int TThostFtdcOrderActionRefType;


///TFtdcInstallCountType是一个安装数量类型

typedef int TThostFtdcInstallCountType;


///TFtdcInstallIDType是一个安装编号类型

typedef int TThostFtdcInstallIDType;


///TFtdcErrorIDType是一个错误代码类型

typedef int TThostFtdcErrorIDType;


///TFtdcSettlementIDType是一个结算编号类型

typedef int TThostFtdcSettlementIDType;


///TFtdcVolumeType是一个数量类型

typedef int TThostFtdcVolumeType;


///TFtdcFrontIDType是一个前置编号类型

typedef int TThostFtdcFrontIDType;


///TFtdcSessionIDType是一个会话编号类型

typedef int TThostFtdcSessionIDType;


///TFtdcSequenceNoType是一个序号类型

typedef int TThostFtdcSequenceNoType;


///TFtdcCommandNoType是一个DB命令序号类型

typedef int TThostFtdcCommandNoType;


///TFtdcMillisecType是一个时间（毫秒）类型

typedef int TThostFtdcMillisecType;


///TFtdcVolumeMultipleType是一个合约数量乘数类型

typedef int TThostFtdcVolumeMultipleType;


///TFtdcTradingSegmentSNType是一个交易阶段编号类型

typedef int TThostFtdcTradingSegmentSNType;


///TFtdcRequestIDType是一个请求编号类型

typedef int TThostFtdcRequestIDType;


///TFtdcYearType是一个年份类型

typedef int TThostFtdcYearType;


///TFtdcMonthType是一个月份类型

typedef int TThostFtdcMonthType;


///TFtdcBoolType是一个布尔型类型

typedef int TThostFtdcBoolType;


///TFtdcPriceType是一个价格类型

typedef double TThostFtdcPriceType;


///TFtdcCombOffsetFlagType是一个组合开平标志类型

typedef char TThostFtdcCombOffsetFlagType[5];


///TFtdcCombHedgeFlagType是一个组合投机套保标志类型

typedef char TThostFtdcCombHedgeFlagType[5];


///TFtdcRatioType是一个比率类型

typedef double TThostFtdcRatioType;


///TFtdcMoneyType是一个资金类型

typedef double TThostFtdcMoneyType;


///TFtdcLargeVolumeType是一个大额数量类型

typedef double TThostFtdcLargeVolumeType;


///TFtdcSequenceSeriesType是一个序列系列号类型

typedef short TThostFtdcSequenceSeriesType;


///TFtdcCommPhaseNoType是一个通讯时段编号类型

typedef short TThostFtdcCommPhaseNoType;


///TFtdcSequenceLabelType是一个序列编号类型

typedef char TThostFtdcSequenceLabelType[2];


///TFtdcUnderlyingMultipleType是一个基础商品乘数类型

typedef double TThostFtdcUnderlyingMultipleType;


///TFtdcPriorityType是一个优先级类型

typedef int TThostFtdcPriorityType;


///TFtdcContractCodeType是一个合同编号类型

typedef char TThostFtdcContractCodeType[41];


///TFtdcCityType是一个市类型

typedef char TThostFtdcCityType[51];


///TFtdcIsStockType是一个是否股民类型

typedef char TThostFtdcIsStockType[11];


///TFtdcChannelType是一个渠道类型

typedef char TThostFtdcChannelType[51];


///TFtdcAddressType是一个通讯地址类型

typedef char TThostFtdcAddressType[101];


///TFtdcZipCodeType是一个邮政编码类型

typedef char TThostFtdcZipCodeType[7];


///TFtdcTelephoneType是一个联系电话类型

typedef char TThostFtdcTelephoneType[41];


///TFtdcFaxType是一个传真类型

typedef char TThostFtdcFaxType[41];


///TFtdcMobileType是一个手机类型

typedef char TThostFtdcMobileType[41];


///TFtdcEMailType是一个电子邮件类型

typedef char TThostFtdcEMailType[41];


///TFtdcMemoType是一个备注类型

typedef char TThostFtdcMemoType[161];


///TFtdcCompanyCodeType是一个企业代码类型

typedef char TThostFtdcCompanyCodeType[51];


///TFtdcWebsiteType是一个网站地址类型

typedef char TThostFtdcWebsiteType[51];


///TFtdcTaxNoType是一个税务登记号类型

typedef char TThostFtdcTaxNoType[31];


///TFtdcBatchStatusType是一个处理状态类型

///未上传
#define THOST_FTDC_BS_NoUpload '1'
///已上传
#define THOST_FTDC_BS_Uploaded '2'
///审核失败
#define THOST_FTDC_BS_Failed '3'

typedef char TThostFtdcBatchStatusType;


///TFtdcPropertyIDType是一个属性代码类型

typedef char TThostFtdcPropertyIDType[33];


///TFtdcPropertyNameType是一个属性名称类型

typedef char TThostFtdcPropertyNameType[65];


///TFtdcLicenseNoType是一个营业执照号类型

typedef char TThostFtdcLicenseNoType[51];


///TFtdcAgentIDType是一个经纪人代码类型

typedef char TThostFtdcAgentIDType[13];


///TFtdcAgentNameType是一个经纪人名称类型

typedef char TThostFtdcAgentNameType[41];


///TFtdcAgentGroupIDType是一个经纪人组代码类型

typedef char TThostFtdcAgentGroupIDType[13];


///TFtdcAgentGroupNameType是一个经纪人组名称类型

typedef char TThostFtdcAgentGroupNameType[41];


///TFtdcReturnStyleType是一个按品种返还方式类型

///按所有品种
#define THOST_FTDC_RS_All '1'
///按品种
#define THOST_FTDC_RS_ByProduct '2'

typedef char TThostFtdcReturnStyleType;


///TFtdcReturnPatternType是一个返还模式类型

///按成交手数
#define THOST_FTDC_RP_ByVolume '1'
///按留存手续费
#define THOST_FTDC_RP_ByFeeOnHand '2'

typedef char TThostFtdcReturnPatternType;


///TFtdcReturnLevelType是一个返还级别类型

///级别1
#define THOST_FTDC_RL_Level1 '1'
///级别2
#define THOST_FTDC_RL_Level2 '2'
///级别3
#define THOST_FTDC_RL_Level3 '3'
///级别4
#define THOST_FTDC_RL_Level4 '4'
///级别5
#define THOST_FTDC_RL_Level5 '5'
///级别6
#define THOST_FTDC_RL_Level6 '6'
///级别7
#define THOST_FTDC_RL_Level7 '7'
///级别8
#define THOST_FTDC_RL_Level8 '8'
///级别9
#define THOST_FTDC_RL_Level9 '9'

typedef char TThostFtdcReturnLevelType;


///TFtdcReturnStandardType是一个返还标准类型

///分阶段返还
#define THOST_FTDC_RSD_ByPeriod '1'
///按某一标准
#define THOST_FTDC_RSD_ByStandard '2'

typedef char TThostFtdcReturnStandardType;


///TFtdcMortgageTypeType是一个质押类型类型

///质出
#define THOST_FTDC_MT_Out '0'
///质入
#define THOST_FTDC_MT_In '1'

typedef char TThostFtdcMortgageTypeType;


///TFtdcInvestorSettlementParamIDType是一个投资者结算参数代码类型

///质押比例
#define THOST_FTDC_ISPI_MortgageRatio '4'
///保证金算法
#define THOST_FTDC_ISPI_MarginWay '5'
///结算单结存是否包含质押
#define THOST_FTDC_ISPI_BillDeposit '9'

typedef char TThostFtdcInvestorSettlementParamIDType;


///TFtdcExchangeSettlementParamIDType是一个交易所结算参数代码类型

///质押比例
#define THOST_FTDC_ESPI_MortgageRatio '1'
///分项资金导入项
#define THOST_FTDC_ESPI_OtherFundItem '2'
///分项资金入交易所出入金
#define THOST_FTDC_ESPI_OtherFundImport '3'
///中金所开户最低可用金额
#define THOST_FTDC_ESPI_CFFEXMinPrepa '6'
///郑商所结算方式
#define THOST_FTDC_ESPI_CZCESettlementType '7'
///交易所交割手续费收取方式
#define THOST_FTDC_ESPI_ExchDelivFeeMode '9'
///投资者交割手续费收取方式
#define THOST_FTDC_ESPI_DelivFeeMode '0'
///郑商所组合持仓保证金收取方式
#define THOST_FTDC_ESPI_CZCEComMarginType 'A'
///大商所套利保证金是否优惠
#define THOST_FTDC_ESPI_DceComMarginType 'B'
///虚值期权保证金优惠比率
#define THOST_FTDC_ESPI_OptOutDisCountRate 'a'
///最低保障系数
#define THOST_FTDC_ESPI_OptMiniGuarantee 'b'

typedef char TThostFtdcExchangeSettlementParamIDType;


///TFtdcSystemParamIDType是一个系统参数代码类型

///投资者代码最小长度
#define THOST_FTDC_SPI_InvestorIDMinLength '1'
///投资者帐号代码最小长度
#define THOST_FTDC_SPI_AccountIDMinLength '2'
///投资者开户默认登录权限
#define THOST_FTDC_SPI_UserRightLogon '3'
///投资者交易结算单成交汇总方式
#define THOST_FTDC_SPI_SettlementBillTrade '4'
///统一开户更新交易编码方式
#define THOST_FTDC_SPI_TradingCode '5'
///结算是否判断存在未复核的出入金和分项资金
#define THOST_FTDC_SPI_CheckFund '6'
///是否启用手续费模板数据权限
#define THOST_FTDC_SPI_CommModelRight '7'
///是否启用保证金率模板数据权限
#define THOST_FTDC_SPI_MarginModelRight '9'
///是否规范用户才能激活
#define THOST_FTDC_SPI_IsStandardActive '8'
///上传的交易所结算文件路径
#define THOST_FTDC_SPI_UploadSettlementFile 'U'
///上报保证金监控中心文件路径
#define THOST_FTDC_SPI_DownloadCSRCFile 'D'
///生成的结算单文件路径
#define THOST_FTDC_SPI_SettlementBillFile 'S'
///证监会文件标识
#define THOST_FTDC_SPI_CSRCOthersFile 'C'
///投资者照片路径
#define THOST_FTDC_SPI_InvestorPhoto 'P'
///全结经纪公司上传文件路径
#define THOST_FTDC_SPI_CSRCData 'R'
///开户密码录入方式
#define THOST_FTDC_SPI_InvestorPwdModel 'I'
///投资者中金所结算文件下载路径
#define THOST_FTDC_SPI_CFFEXInvestorSettleFile 'F'
///投资者代码编码方式
#define THOST_FTDC_SPI_InvestorIDType 'a'
///休眠户最高权益
#define THOST_FTDC_SPI_FreezeMaxReMain 'r'
///手续费相关操作实时上场开关
#define THOST_FTDC_SPI_IsSync 'A'
///解除开仓权限限制
#define THOST_FTDC_SPI_RelieveOpenLimit 'O'
///是否规范用户才能休眠
#define THOST_FTDC_SPI_IsStandardFreeze 'X'
///郑商所是否开放所有品种套保交易
#define THOST_FTDC_SPI_CZCENormalProductHedge 'B'

typedef char TThostFtdcSystemParamIDType;


///TFtdcTradeParamIDType是一个交易系统参数代码类型

///系统加密算法
#define THOST_FTDC_TPID_EncryptionStandard 'E'
///系统风险算法
#define THOST_FTDC_TPID_RiskMode 'R'
///系统风险算法是否全局 0-否 1-是
#define THOST_FTDC_TPID_RiskModeGlobal 'G'
///密码加密算法
#define THOST_FTDC_TPID_modeEncode 'P'
///价格小数位数参数
#define THOST_FTDC_TPID_tickMode 'T'
///用户最大会话数
#define THOST_FTDC_TPID_SingleUserSessionMaxNum 'S'
///最大连续登录失败数
#define THOST_FTDC_TPID_LoginFailMaxNum 'L'
///是否强制认证
#define THOST_FTDC_TPID_IsAuthForce 'A'
///是否冻结证券持仓
#define THOST_FTDC_TPID_IsPosiFreeze 'F'
///是否限仓
#define THOST_FTDC_TPID_IsPosiLimit 'M'
///郑商所询价时间间隔
#define THOST_FTDC_TPID_ForQuoteTimeInterval 'Q'

typedef char TThostFtdcTradeParamIDType;


///TFtdcSettlementParamValueType是一个参数代码值类型

typedef char TThostFtdcSettlementParamValueType[256];


///TFtdcCounterIDType是一个计数器代码类型

typedef char TThostFtdcCounterIDType[33];


///TFtdcInvestorGroupNameType是一个投资者分组名称类型

typedef char TThostFtdcInvestorGroupNameType[41];


///TFtdcBrandCodeType是一个牌号类型

typedef char TThostFtdcBrandCodeType[257];


///TFtdcWarehouseType是一个仓库类型

typedef char TThostFtdcWarehouseType[257];


///TFtdcProductDateType是一个产期类型

typedef char TThostFtdcProductDateType[41];


///TFtdcGradeType是一个等级类型

typedef char TThostFtdcGradeType[41];


///TFtdcClassifyType是一个类别类型

typedef char TThostFtdcClassifyType[41];


///TFtdcPositionType是一个货位类型

typedef char TThostFtdcPositionType[41];


///TFtdcYieldlyType是一个产地类型

typedef char TThostFtdcYieldlyType[41];


///TFtdcWeightType是一个公定重量类型

typedef char TThostFtdcWeightType[41];


///TFtdcSubEntryFundNoType是一个分项资金流水号类型

typedef int TThostFtdcSubEntryFundNoType;


///TFtdcFileIDType是一个文件标识类型

///资金数据
#define THOST_FTDC_FI_SettlementFund 'F'
///成交数据
#define THOST_FTDC_FI_Trade 'T'
///投资者持仓数据
#define THOST_FTDC_FI_InvestorPosition 'P'
///投资者分项资金数据
#define THOST_FTDC_FI_SubEntryFund 'O'
///组合持仓数据
#define THOST_FTDC_FI_CZCECombinationPos 'C'
///上报保证金监控中心数据
#define THOST_FTDC_FI_CSRCData 'R'
///郑商所平仓了结数据
#define THOST_FTDC_FI_CZCEClose 'L'
///郑商所非平仓了结数据
#define THOST_FTDC_FI_CZCENoClose 'N'
///持仓明细数据
#define THOST_FTDC_FI_PositionDtl 'D'
///期权执行文件
#define THOST_FTDC_FI_OptionStrike 'S'
///结算价比对文件
#define THOST_FTDC_FI_SettlementPriceComparison 'M'
///上期所非持仓变动明细
#define THOST_FTDC_FI_NonTradePosChange 'B'

typedef char TThostFtdcFileIDType;


///TFtdcFileNameType是一个文件名称类型

typedef char TThostFtdcFileNameType[257];


///TFtdcFileTypeType是一个文件上传类型类型

///结算
#define THOST_FTDC_FUT_Settlement '0'
///核对
#define THOST_FTDC_FUT_Check '1'

typedef char TThostFtdcFileTypeType;


///TFtdcFileFormatType是一个文件格式类型

///文本文件(.txt)
#define THOST_FTDC_FFT_Txt '0'
///压缩文件(.zip)
#define THOST_FTDC_FFT_Zip '1'
///DBF文件(.dbf)
#define THOST_FTDC_FFT_DBF '2'

typedef char TThostFtdcFileFormatType;


///TFtdcFileUploadStatusType是一个文件状态类型

///上传成功
#define THOST_FTDC_FUS_SucceedUpload '1'
///上传失败
#define THOST_FTDC_FUS_FailedUpload '2'
///导入成功
#define THOST_FTDC_FUS_SucceedLoad '3'
///导入部分成功
#define THOST_FTDC_FUS_PartSucceedLoad '4'
///导入失败
#define THOST_FTDC_FUS_FailedLoad '5'

typedef char TThostFtdcFileUploadStatusType;


///TFtdcTransferDirectionType是一个移仓方向类型

///移出
#define THOST_FTDC_TD_Out '0'
///移入
#define THOST_FTDC_TD_In '1'

typedef char TThostFtdcTransferDirectionType;


///TFtdcUploadModeType是一个上传文件类型类型

typedef char TThostFtdcUploadModeType[21];


///TFtdcAccountIDType是一个投资者帐号类型

typedef char TThostFtdcAccountIDType[13];


///TFtdcBankFlagType是一个银行统一标识类型类型

typedef char TThostFtdcBankFlagType[4];


///TFtdcBankAccountType是一个银行账户类型

typedef char TThostFtdcBankAccountType[41];


///TFtdcOpenNameType是一个银行账户的开户人名称类型

typedef char TThostFtdcOpenNameType[61];


///TFtdcOpenBankType是一个银行账户的开户行类型

typedef char TThostFtdcOpenBankType[101];


///TFtdcBankNameType是一个银行名称类型

typedef char TThostFtdcBankNameType[101];


///TFtdcPublishPathType是一个发布路径类型

typedef char TThostFtdcPublishPathType[257];


///TFtdcOperatorIDType是一个操作员代码类型

typedef char TThostFtdcOperatorIDType[65];


///TFtdcMonthCountType是一个月份数量类型

typedef int TThostFtdcMonthCountType;


///TFtdcAdvanceMonthArrayType是一个月份提前数组类型

typedef char TThostFtdcAdvanceMonthArrayType[13];


///TFtdcDateExprType是一个日期表达式类型

typedef char TThostFtdcDateExprType[1025];


///TFtdcInstrumentIDExprType是一个合约代码表达式类型

typedef char TThostFtdcInstrumentIDExprType[41];


///TFtdcInstrumentNameExprType是一个合约名称表达式类型

typedef char TThostFtdcInstrumentNameExprType[41];


///TFtdcSpecialCreateRuleType是一个特殊的创建规则类型

///没有特殊创建规则
#define THOST_FTDC_SC_NoSpecialRule '0'
///不包含春节
#define THOST_FTDC_SC_NoSpringFestival '1'

typedef char TThostFtdcSpecialCreateRuleType;


///TFtdcBasisPriceTypeType是一个挂牌基准价类型类型

///上一合约结算价
#define THOST_FTDC_IPT_LastSettlement '1'
///上一合约收盘价
#define THOST_FTDC_IPT_LaseClose '2'

typedef char TThostFtdcBasisPriceTypeType;


///TFtdcProductLifePhaseType是一个产品生命周期状态类型

///活跃
#define THOST_FTDC_PLP_Active '1'
///不活跃
#define THOST_FTDC_PLP_NonActive '2'
///注销
#define THOST_FTDC_PLP_Canceled '3'

typedef char TThostFtdcProductLifePhaseType;


///TFtdcDeliveryModeType是一个交割方式类型

///现金交割
#define THOST_FTDC_DM_CashDeliv '1'
///实物交割
#define THOST_FTDC_DM_CommodityDeliv '2'

typedef char TThostFtdcDeliveryModeType;


///TFtdcLogLevelType是一个日志级别类型

typedef char TThostFtdcLogLevelType[33];


///TFtdcProcessNameType是一个存储过程名称类型

typedef char TThostFtdcProcessNameType[257];


///TFtdcOperationMemoType是一个操作摘要类型

typedef char TThostFtdcOperationMemoType[1025];


///TFtdcFundIOTypeType是一个出入金类型类型

///出入金
#define THOST_FTDC_FIOT_FundIO '1'
///银期转帐
#define THOST_FTDC_FIOT_Transfer '2'
///银期换汇
#define THOST_FTDC_FIOT_SwapCurrency '3'

typedef char TThostFtdcFundIOTypeType;


///TFtdcFundTypeType是一个资金类型类型

///银行存款
#define THOST_FTDC_FT_Deposite '1'
///分项资金
#define THOST_FTDC_FT_ItemFund '2'
///公司调整
#define THOST_FTDC_FT_Company '3'
///资金内转
#define THOST_FTDC_FT_InnerTransfer '4'

typedef char TThostFtdcFundTypeType;


///TFtdcFundDirectionType是一个出入金方向类型

///入金
#define THOST_FTDC_FD_In '1'
///出金
#define THOST_FTDC_FD_Out '2'

typedef char TThostFtdcFundDirectionType;


///TFtdcFundStatusType是一个资金状态类型

///已录入
#define THOST_FTDC_FS_Record '1'
///已复核
#define THOST_FTDC_FS_Check '2'
///已冲销
#define THOST_FTDC_FS_Charge '3'

typedef char TThostFtdcFundStatusType;


///TFtdcBillNoType是一个票据号类型

typedef char TThostFtdcBillNoType[15];


///TFtdcBillNameType是一个票据名称类型

typedef char TThostFtdcBillNameType[33];


///TFtdcPublishStatusType是一个发布状态类型

///未发布
#define THOST_FTDC_PS_None '1'
///正在发布
#define THOST_FTDC_PS_Publishing '2'
///已发布
#define THOST_FTDC_PS_Published '3'

typedef char TThostFtdcPublishStatusType;


///TFtdcEnumValueIDType是一个枚举值代码类型

typedef char TThostFtdcEnumValueIDType[65];


///TFtdcEnumValueTypeType是一个枚举值类型类型

typedef char TThostFtdcEnumValueTypeType[33];


///TFtdcEnumValueLabelType是一个枚举值名称类型

typedef char TThostFtdcEnumValueLabelType[65];


///TFtdcEnumValueResultType是一个枚举值结果类型

typedef char TThostFtdcEnumValueResultType[33];


///TFtdcSystemStatusType是一个系统状态类型

///不活跃
#define THOST_FTDC_ES_NonActive '1'
///启动
#define THOST_FTDC_ES_Startup '2'
///交易开始初始化
#define THOST_FTDC_ES_Initialize '3'
///交易完成初始化
#define THOST_FTDC_ES_Initialized '4'
///收市开始
#define THOST_FTDC_ES_Close '5'
///收市完成
#define THOST_FTDC_ES_Closed '6'
///结算
#define THOST_FTDC_ES_Settlement '7'

typedef char TThostFtdcSystemStatusType;


///TFtdcSettlementStatusType是一个结算状态类型

///初始
#define THOST_FTDC_STS_Initialize '0'
///结算中
#define THOST_FTDC_STS_Settlementing '1'
///已结算
#define THOST_FTDC_STS_Settlemented '2'
///结算完成
#define THOST_FTDC_STS_Finished '3'

typedef char TThostFtdcSettlementStatusType;


///TFtdcRangeIntTypeType是一个限定值类型类型

typedef char TThostFtdcRangeIntTypeType[33];


///TFtdcRangeIntFromType是一个限定值下限类型

typedef char TThostFtdcRangeIntFromType[33];


///TFtdcRangeIntToType是一个限定值上限类型

typedef char TThostFtdcRangeIntToType[33];


///TFtdcFunctionIDType是一个功能代码类型

typedef char TThostFtdcFunctionIDType[25];


///TFtdcFunctionValueCodeType是一个功能编码类型

typedef char TThostFtdcFunctionValueCodeType[257];


///TFtdcFunctionNameType是一个功能名称类型

typedef char TThostFtdcFunctionNameType[65];


///TFtdcRoleIDType是一个角色编号类型

typedef char TThostFtdcRoleIDType[11];


///TFtdcRoleNameType是一个角色名称类型

typedef char TThostFtdcRoleNameType[41];


///TFtdcDescriptionType是一个描述类型

typedef char TThostFtdcDescriptionType[401];


///TFtdcCombineIDType是一个组合编号类型

typedef char TThostFtdcCombineIDType[25];


///TFtdcCombineTypeType是一个组合类型类型

typedef char TThostFtdcCombineTypeType[25];


///TFtdcInvestorTypeType是一个投资者类型类型

///自然人
#define THOST_FTDC_CT_Person '0'
///法人
#define THOST_FTDC_CT_Company '1'
///投资基金
#define THOST_FTDC_CT_Fund '2'
///特殊法人
#define THOST_FTDC_CT_SpecialOrgan '3'
///资管户
#define THOST_FTDC_CT_Asset '4'

typedef char TThostFtdcInvestorTypeType;


///TFtdcBrokerTypeType是一个经纪公司类型类型

///交易会员
#define THOST_FTDC_BT_Trade '0'
///交易结算会员
#define THOST_FTDC_BT_TradeSettle '1'

typedef char TThostFtdcBrokerTypeType;


///TFtdcRiskLevelType是一个风险等级类型

///低风险客户
#define THOST_FTDC_FAS_Low '1'
///普通客户
#define THOST_FTDC_FAS_Normal '2'
///关注客户
#define THOST_FTDC_FAS_Focus '3'
///风险客户
#define THOST_FTDC_FAS_Risk '4'

typedef char TThostFtdcRiskLevelType;


///TFtdcFeeAcceptStyleType是一个手续费收取方式类型

///按交易收取
#define THOST_FTDC_FAS_ByTrade '1'
///按交割收取
#define THOST_FTDC_FAS_ByDeliv '2'
///不收
#define THOST_FTDC_FAS_None '3'
///按指定手续费收取
#define THOST_FTDC_FAS_FixFee '4'

typedef char TThostFtdcFeeAcceptStyleType;


///TFtdcPasswordTypeType是一个密码类型类型

///交易密码
#define THOST_FTDC_PWDT_Trade '1'
///资金密码
#define THOST_FTDC_PWDT_Account '2'

typedef char TThostFtdcPasswordTypeType;


///TFtdcAlgorithmType是一个盈亏算法类型

///浮盈浮亏都计算
#define THOST_FTDC_AG_All '1'
///浮盈不计，浮亏计
#define THOST_FTDC_AG_OnlyLost '2'
///浮盈计，浮亏不计
#define THOST_FTDC_AG_OnlyGain '3'
///浮盈浮亏都不计算
#define THOST_FTDC_AG_None '4'

typedef char TThostFtdcAlgorithmType;


///TFtdcIncludeCloseProfitType是一个是否包含平仓盈利类型

///包含平仓盈利
#define THOST_FTDC_ICP_Include '0'
///不包含平仓盈利
#define THOST_FTDC_ICP_NotInclude '2'

typedef char TThostFtdcIncludeCloseProfitType;


///TFtdcAllWithoutTradeType是一个是否受可提比例限制类型

///无仓无成交不受可提比例限制
#define THOST_FTDC_AWT_Enable '0'
///受可提比例限制
#define THOST_FTDC_AWT_Disable '2'
///无仓不受可提比例限制
#define THOST_FTDC_AWT_NoHoldEnable '3'

typedef char TThostFtdcAllWithoutTradeType;


///TFtdcCommentType是一个盈亏算法说明类型

typedef char TThostFtdcCommentType[31];


///TFtdcVersionType是一个版本号类型

typedef char TThostFtdcVersionType[4];


///TFtdcTradeCodeType是一个交易代码类型

typedef char TThostFtdcTradeCodeType[7];


///TFtdcTradeDateType是一个交易日期类型

typedef char TThostFtdcTradeDateType[9];


///TFtdcTradeTimeType是一个交易时间类型

typedef char TThostFtdcTradeTimeType[9];


///TFtdcTradeSerialType是一个发起方流水号类型

typedef char TThostFtdcTradeSerialType[9];


///TFtdcTradeSerialNoType是一个发起方流水号类型

typedef int TThostFtdcTradeSerialNoType;


///TFtdcFutureIDType是一个期货公司代码类型

typedef char TThostFtdcFutureIDType[11];


///TFtdcBankIDType是一个银行代码类型

typedef char TThostFtdcBankIDType[4];


///TFtdcBankBrchIDType是一个银行分中心代码类型

typedef char TThostFtdcBankBrchIDType[5];


///TFtdcBankBranchIDType是一个分中心代码类型

typedef char TThostFtdcBankBranchIDType[11];


///TFtdcOperNoType是一个交易柜员类型

typedef char TThostFtdcOperNoType[17];


///TFtdcDeviceIDType是一个渠道标志类型

typedef char TThostFtdcDeviceIDType[3];


///TFtdcRecordNumType是一个记录数类型

typedef char TThostFtdcRecordNumType[7];


///TFtdcFutureAccountType是一个期货资金账号类型

typedef char TThostFtdcFutureAccountType[22];


///TFtdcFuturePwdFlagType是一个资金密码核对标志类型

///不核对
#define THOST_FTDC_FPWD_UnCheck '0'
///核对
#define THOST_FTDC_FPWD_Check '1'

typedef char TThostFtdcFuturePwdFlagType;


///TFtdcTransferTypeType是一个银期转账类型类型

///银行转期货
#define THOST_FTDC_TT_BankToFuture '0'
///期货转银行
#define THOST_FTDC_TT_FutureToBank '1'

typedef char TThostFtdcTransferTypeType;


///TFtdcFutureAccPwdType是一个期货资金密码类型

typedef char TThostFtdcFutureAccPwdType[17];


///TFtdcCurrencyCodeType是一个币种类型

typedef char TThostFtdcCurrencyCodeType[4];


///TFtdcRetCodeType是一个响应代码类型

typedef char TThostFtdcRetCodeType[5];


///TFtdcRetInfoType是一个响应信息类型

typedef char TThostFtdcRetInfoType[129];


///TFtdcTradeAmtType是一个银行总余额类型

typedef char TThostFtdcTradeAmtType[20];


///TFtdcUseAmtType是一个银行可用余额类型

typedef char TThostFtdcUseAmtType[20];


///TFtdcFetchAmtType是一个银行可取余额类型

typedef char TThostFtdcFetchAmtType[20];


///TFtdcTransferValidFlagType是一个转账有效标志类型

///无效或失败
#define THOST_FTDC_TVF_Invalid '0'
///有效
#define THOST_FTDC_TVF_Valid '1'
///冲正
#define THOST_FTDC_TVF_Reverse '2'

typedef char TThostFtdcTransferValidFlagType;


///TFtdcCertCodeType是一个证件号码类型

typedef char TThostFtdcCertCodeType[21];


///TFtdcReasonType是一个事由类型

///错单
#define THOST_FTDC_RN_CD '0'
///资金在途
#define THOST_FTDC_RN_ZT '1'
///其它
#define THOST_FTDC_RN_QT '2'

typedef char TThostFtdcReasonType;


///TFtdcFundProjectIDType是一个资金项目编号类型

typedef char TThostFtdcFundProjectIDType[5];


///TFtdcSexType是一个性别类型

///未知
#define THOST_FTDC_SEX_None '0'
///男
#define THOST_FTDC_SEX_Man '1'
///女
#define THOST_FTDC_SEX_Woman '2'

typedef char TThostFtdcSexType;


///TFtdcProfessionType是一个职业类型

typedef char TThostFtdcProfessionType[101];


///TFtdcNationalType是一个国籍类型

typedef char TThostFtdcNationalType[31];


///TFtdcProvinceType是一个省类型

typedef char TThostFtdcProvinceType[51];


///TFtdcRegionType是一个区类型

typedef char TThostFtdcRegionType[16];


///TFtdcCountryType是一个国家类型

typedef char TThostFtdcCountryType[16];


///TFtdcLicenseNOType是一个营业执照类型

typedef char TThostFtdcLicenseNOType[33];


///TFtdcCompanyTypeType是一个企业性质类型

typedef char TThostFtdcCompanyTypeType[16];


///TFtdcBusinessScopeType是一个经营范围类型

typedef char TThostFtdcBusinessScopeType[1001];


///TFtdcCapitalCurrencyType是一个注册资本币种类型

typedef char TThostFtdcCapitalCurrencyType[4];


///TFtdcUserTypeType是一个用户类型类型

///投资者
#define THOST_FTDC_UT_Investor '0'
///操作员
#define THOST_FTDC_UT_Operator '1'
///管理员
#define THOST_FTDC_UT_SuperUser '2'

typedef char TThostFtdcUserTypeType;


///TFtdcRateTypeType是一个费率类型类型

///保证金率
#define THOST_FTDC_RATETYPE_MarginRate '2'

typedef char TThostFtdcRateTypeType;


///TFtdcNoteTypeType是一个通知类型类型

///交易结算单
#define THOST_FTDC_NOTETYPE_TradeSettleBill '1'
///交易结算月报
#define THOST_FTDC_NOTETYPE_TradeSettleMonth '2'
///追加保证金通知书
#define THOST_FTDC_NOTETYPE_CallMarginNotes '3'
///强行平仓通知书
#define THOST_FTDC_NOTETYPE_ForceCloseNotes '4'
///成交通知书
#define THOST_FTDC_NOTETYPE_TradeNotes '5'
///交割通知书
#define THOST_FTDC_NOTETYPE_DelivNotes '6'

typedef char TThostFtdcNoteTypeType;


///TFtdcSettlementStyleType是一个结算单方式类型

///逐日盯市
#define THOST_FTDC_SBS_Day '1'
///逐笔对冲
#define THOST_FTDC_SBS_Volume '2'

typedef char TThostFtdcSettlementStyleType;


///TFtdcBrokerDNSType是一个域名类型

typedef char TThostFtdcBrokerDNSType[256];


///TFtdcSentenceType是一个语句类型

typedef char TThostFtdcSentenceType[501];


///TFtdcSettlementBillTypeType是一个结算单类型类型

///日报
#define THOST_FTDC_ST_Day '0'
///月报
#define THOST_FTDC_ST_Month '1'

typedef char TThostFtdcSettlementBillTypeType;


///TFtdcUserRightTypeType是一个客户权限类型类型

///登录
#define THOST_FTDC_URT_Logon '1'
///银期转帐
#define THOST_FTDC_URT_Transfer '2'
///邮寄结算单
#define THOST_FTDC_URT_EMail '3'
///传真结算单
#define THOST_FTDC_URT_Fax '4'
///条件单
#define THOST_FTDC_URT_ConditionOrder '5'

typedef char TThostFtdcUserRightTypeType;


///TFtdcMarginPriceTypeType是一个保证金价格类型类型

///昨结算价
#define THOST_FTDC_MPT_PreSettlementPrice '1'
///最新价
#define THOST_FTDC_MPT_SettlementPrice '2'
///成交均价
#define THOST_FTDC_MPT_AveragePrice '3'
///开仓价
#define THOST_FTDC_MPT_OpenPrice '4'

typedef char TThostFtdcMarginPriceTypeType;


///TFtdcBillGenStatusType是一个结算单生成状态类型

///未生成
#define THOST_FTDC_BGS_None '0'
///生成中
#define THOST_FTDC_BGS_NoGenerated '1'
///已生成
#define THOST_FTDC_BGS_Generated '2'

typedef char TThostFtdcBillGenStatusType;


///TFtdcAlgoTypeType是一个算法类型类型

///持仓处理算法
#define THOST_FTDC_AT_HandlePositionAlgo '1'
///寻找保证金率算法
#define THOST_FTDC_AT_FindMarginRateAlgo '2'

typedef char TThostFtdcAlgoTypeType;


///TFtdcHandlePositionAlgoIDType是一个持仓处理算法编号类型

///基本
#define THOST_FTDC_HPA_Base '1'
///大连商品交易所
#define THOST_FTDC_HPA_DCE '2'
///郑州商品交易所
#define THOST_FTDC_HPA_CZCE '3'

typedef char TThostFtdcHandlePositionAlgoIDType;


///TFtdcFindMarginRateAlgoIDType是一个寻找保证金率算法编号类型

///基本
#define THOST_FTDC_FMRA_Base '1'
///大连商品交易所
#define THOST_FTDC_FMRA_DCE '2'
///郑州商品交易所
#define THOST_FTDC_FMRA_CZCE '3'

typedef char TThostFtdcFindMarginRateAlgoIDType;


///TFtdcHandleTradingAccountAlgoIDType是一个资金处理算法编号类型

///基本
#define THOST_FTDC_HTAA_Base '1'
///大连商品交易所
#define THOST_FTDC_HTAA_DCE '2'
///郑州商品交易所
#define THOST_FTDC_HTAA_CZCE '3'

typedef char TThostFtdcHandleTradingAccountAlgoIDType;


///TFtdcPersonTypeType是一个联系人类型类型

///指定下单人
#define THOST_FTDC_PST_Order '1'
///开户授权人
#define THOST_FTDC_PST_Open '2'
///资金调拨人
#define THOST_FTDC_PST_Fund '3'
///结算单确认人
#define THOST_FTDC_PST_Settlement '4'
///法人
#define THOST_FTDC_PST_Company '5'
///法人代表
#define THOST_FTDC_PST_Corporation '6'
///投资者联系人
#define THOST_FTDC_PST_LinkMan '7'
///分户管理资产负责人
#define THOST_FTDC_PST_Ledger '8'
///托（保）管人
#define THOST_FTDC_PST_Trustee '9'
///托（保）管机构法人代表
#define THOST_FTDC_PST_TrusteeCorporation 'A'
///托（保）管机构开户授权人
#define THOST_FTDC_PST_TrusteeOpen 'B'
///托（保）管机构联系人
#define THOST_FTDC_PST_TrusteeContact 'C'
///境外自然人参考证件
#define THOST_FTDC_PST_ForeignerRefer 'D'
///法人代表参考证件
#define THOST_FTDC_PST_CorporationRefer 'E'

typedef char TThostFtdcPersonTypeType;


///TFtdcQueryInvestorRangeType是一个查询范围类型

///所有
#define THOST_FTDC_QIR_All '1'
///查询分类
#define THOST_FTDC_QIR_Group '2'
///单一投资者
#define THOST_FTDC_QIR_Single '3'

typedef char TThostFtdcQueryInvestorRangeType;


///TFtdcInvestorRiskStatusType是一个投资者风险状态类型

///正常
#define THOST_FTDC_IRS_Normal '1'
///警告
#define THOST_FTDC_IRS_Warn '2'
///追保
#define THOST_FTDC_IRS_Call '3'
///强平
#define THOST_FTDC_IRS_Force '4'
///异常
#define THOST_FTDC_IRS_Exception '5'

typedef char TThostFtdcInvestorRiskStatusType;


///TFtdcLegIDType是一个单腿编号类型

typedef int TThostFtdcLegIDType;


///TFtdcLegMultipleType是一个单腿乘数类型

typedef int TThostFtdcLegMultipleType;


///TFtdcImplyLevelType是一个派生层数类型

typedef int TThostFtdcImplyLevelType;


///TFtdcClearAccountType是一个结算账户类型

typedef char TThostFtdcClearAccountType[33];


///TFtdcOrganNOType是一个结算账户类型

typedef char TThostFtdcOrganNOType[6];


///TFtdcClearbarchIDType是一个结算账户联行号类型

typedef char TThostFtdcClearbarchIDType[6];


///TFtdcUserEventTypeType是一个用户事件类型类型

///登录
#define THOST_FTDC_UET_Login '1'
///登出
#define THOST_FTDC_UET_Logout '2'
///交易成功
#define THOST_FTDC_UET_Trading '3'
///交易失败
#define THOST_FTDC_UET_TradingError '4'
///修改密码
#define THOST_FTDC_UET_UpdatePassword '5'
///客户端认证
#define THOST_FTDC_UET_Authenticate '6'
///其他
#define THOST_FTDC_UET_Other '9'

typedef char TThostFtdcUserEventTypeType;


///TFtdcUserEventInfoType是一个用户事件信息类型

typedef char TThostFtdcUserEventInfoType[1025];


///TFtdcCloseStyleType是一个平仓方式类型

///先开先平
#define THOST_FTDC_ICS_Close '0'
///先平今再平昨
#define THOST_FTDC_ICS_CloseToday '1'

typedef char TThostFtdcCloseStyleType;


///TFtdcStatModeType是一个统计方式类型

///----
#define THOST_FTDC_SM_Non '0'
///按合约统计
#define THOST_FTDC_SM_Instrument '1'
///按产品统计
#define THOST_FTDC_SM_Product '2'
///按投资者统计
#define THOST_FTDC_SM_Investor '3'

typedef char TThostFtdcStatModeType;


///TFtdcParkedOrderStatusType是一个预埋单状态类型

///未发送
#define THOST_FTDC_PAOS_NotSend '1'
///已发送
#define THOST_FTDC_PAOS_Send '2'
///已删除
#define THOST_FTDC_PAOS_Deleted '3'

typedef char TThostFtdcParkedOrderStatusType;


///TFtdcParkedOrderIDType是一个预埋报单编号类型

typedef char TThostFtdcParkedOrderIDType[13];


///TFtdcParkedOrderActionIDType是一个预埋撤单编号类型

typedef char TThostFtdcParkedOrderActionIDType[13];


///TFtdcVirDealStatusType是一个处理状态类型

///正在处理
#define THOST_FTDC_VDS_Dealing '1'
///处理成功
#define THOST_FTDC_VDS_DeaclSucceed '2'

typedef char TThostFtdcVirDealStatusType;


///TFtdcOrgSystemIDType是一个原有系统代码类型

///综合交易平台
#define THOST_FTDC_ORGS_Standard '0'
///易盛系统
#define THOST_FTDC_ORGS_ESunny '1'
///金仕达V6系统
#define THOST_FTDC_ORGS_KingStarV6 '2'

typedef char TThostFtdcOrgSystemIDType;


///TFtdcVirTradeStatusType是一个交易状态类型

///正常处理中
#define THOST_FTDC_VTS_NaturalDeal '0'
///成功结束
#define THOST_FTDC_VTS_SucceedEnd '1'
///失败结束
#define THOST_FTDC_VTS_FailedEND '2'
///异常中
#define THOST_FTDC_VTS_Exception '3'
///已人工异常处理
#define THOST_FTDC_VTS_ManualDeal '4'
///通讯异常 ，请人工处理
#define THOST_FTDC_VTS_MesException '5'
///系统出错，请人工处理
#define THOST_FTDC_VTS_SysException '6'

typedef char TThostFtdcVirTradeStatusType;


///TFtdcVirBankAccTypeType是一个银行帐户类型类型

///存折
#define THOST_FTDC_VBAT_BankBook '1'
///储蓄卡
#define THOST_FTDC_VBAT_BankCard '2'
///信用卡
#define THOST_FTDC_VBAT_CreditCard '3'

typedef char TThostFtdcVirBankAccTypeType;


///TFtdcVirementStatusType是一个银行帐户类型类型

///正常
#define THOST_FTDC_VMS_Natural '0'
///销户
#define THOST_FTDC_VMS_Canceled '9'

typedef char TThostFtdcVirementStatusType;


///TFtdcVirementAvailAbilityType是一个有效标志类型

///未确认
#define THOST_FTDC_VAA_NoAvailAbility '0'
///有效
#define THOST_FTDC_VAA_AvailAbility '1'
///冲正
#define THOST_FTDC_VAA_Repeal '2'

typedef char TThostFtdcVirementAvailAbilityType;


///TFtdcVirementTradeCodeType是一个交易代码类型

///银行发起银行资金转期货
#define THOST_FTDC_VTC_BankBankToFuture '102001'
///银行发起期货资金转银行
#define THOST_FTDC_VTC_BankFutureToBank '102002'
///期货发起银行资金转期货
#define THOST_FTDC_VTC_FutureBankToFuture '202001'
///期货发起期货资金转银行
#define THOST_FTDC_VTC_FutureFutureToBank '202002'

typedef char TThostFtdcVirementTradeCodeType;


///TFtdcPhotoTypeNameType是一个影像类型名称类型

typedef char TThostFtdcPhotoTypeNameType[41];


///TFtdcPhotoTypeIDType是一个影像类型代码类型

typedef char TThostFtdcPhotoTypeIDType[5];


///TFtdcPhotoNameType是一个影像名称类型

typedef char TThostFtdcPhotoNameType[161];


///TFtdcTopicIDType是一个主题代码类型

typedef int TThostFtdcTopicIDType;


///TFtdcReportTypeIDType是一个交易报告类型标识类型

typedef char TThostFtdcReportTypeIDType[3];


///TFtdcCharacterIDType是一个交易特征代码类型

typedef char TThostFtdcCharacterIDType[5];


///TFtdcAMLParamIDType是一个参数代码类型

typedef char TThostFtdcAMLParamIDType[21];


///TFtdcAMLInvestorTypeType是一个投资者类型类型

typedef char TThostFtdcAMLInvestorTypeType[3];


///TFtdcAMLIdCardTypeType是一个证件类型类型

typedef char TThostFtdcAMLIdCardTypeType[3];


///TFtdcAMLTradeDirectType是一个资金进出方向类型

typedef char TThostFtdcAMLTradeDirectType[3];


///TFtdcAMLTradeModelType是一个资金进出方式类型

typedef char TThostFtdcAMLTradeModelType[3];


///TFtdcAMLParamIDType是一个参数代码类型

typedef char TThostFtdcAMLParamIDType[21];


///TFtdcAMLOpParamValueType是一个业务参数代码值类型

typedef double TThostFtdcAMLOpParamValueType;


///TFtdcAMLCustomerCardTypeType是一个客户身份证件/证明文件类型类型

typedef char TThostFtdcAMLCustomerCardTypeType[81];


///TFtdcAMLInstitutionNameType是一个金融机构网点名称类型

typedef char TThostFtdcAMLInstitutionNameType[65];


///TFtdcAMLDistrictIDType是一个金融机构网点所在地区行政区划代码类型

typedef char TThostFtdcAMLDistrictIDType[7];


///TFtdcAMLRelationShipType是一个金融机构网点与大额交易的关系类型

typedef char TThostFtdcAMLRelationShipType[3];


///TFtdcAMLInstitutionTypeType是一个金融机构网点代码类型类型

typedef char TThostFtdcAMLInstitutionTypeType[3];


///TFtdcAMLInstitutionIDType是一个金融机构网点代码类型

typedef char TThostFtdcAMLInstitutionIDType[13];


///TFtdcAMLAccountTypeType是一个账户类型类型

typedef char TThostFtdcAMLAccountTypeType[5];


///TFtdcAMLTradingTypeType是一个交易方式类型

typedef char TThostFtdcAMLTradingTypeType[7];


///TFtdcAMLTransactClassType是一个涉外收支交易分类与代码类型

typedef char TThostFtdcAMLTransactClassType[7];


///TFtdcAMLCapitalIOType是一个资金收付标识类型

typedef char TThostFtdcAMLCapitalIOType[3];


///TFtdcAMLSiteType是一个交易地点类型

typedef char TThostFtdcAMLSiteType[10];


///TFtdcAMLCapitalPurposeType是一个资金用途类型

typedef char TThostFtdcAMLCapitalPurposeType[129];


///TFtdcAMLReportTypeType是一个报文类型类型

typedef char TThostFtdcAMLReportTypeType[2];


///TFtdcAMLSerialNoType是一个编号类型

typedef char TThostFtdcAMLSerialNoType[5];


///TFtdcAMLStatusType是一个状态类型

typedef char TThostFtdcAMLStatusType[2];


///TFtdcAMLGenStatusType是一个Aml生成方式类型

///程序生成
#define THOST_FTDC_GEN_Program '0'
///人工生成
#define THOST_FTDC_GEN_HandWork '1'

typedef char TThostFtdcAMLGenStatusType;


///TFtdcAMLSeqCodeType是一个业务标识号类型

typedef char TThostFtdcAMLSeqCodeType[65];


///TFtdcAMLFileNameType是一个AML文件名类型

typedef char TThostFtdcAMLFileNameType[257];


///TFtdcAMLMoneyType是一个反洗钱资金类型

typedef double TThostFtdcAMLMoneyType;


///TFtdcAMLFileAmountType是一个反洗钱资金类型

typedef int TThostFtdcAMLFileAmountType;


///TFtdcCFMMCKeyType是一个密钥类型(保证金监管)类型

typedef char TThostFtdcCFMMCKeyType[21];


///TFtdcCFMMCTokenType是一个令牌类型(保证金监管)类型

typedef char TThostFtdcCFMMCTokenType[21];


///TFtdcCFMMCKeyKindType是一个动态密钥类别(保证金监管)类型

///主动请求更新
#define THOST_FTDC_CFMMCKK_REQUEST 'R'
///CFMMC自动更新
#define THOST_FTDC_CFMMCKK_AUTO 'A'
///CFMMC手动更新
#define THOST_FTDC_CFMMCKK_MANUAL 'M'

typedef char TThostFtdcCFMMCKeyKindType;


///TFtdcAMLReportNameType是一个报文名称类型

typedef char TThostFtdcAMLReportNameType[81];


///TFtdcIndividualNameType是一个个人姓名类型

typedef char TThostFtdcIndividualNameType[51];


///TFtdcCurrencyIDType是一个币种代码类型

typedef char TThostFtdcCurrencyIDType[4];


///TFtdcCustNumberType是一个客户编号类型

typedef char TThostFtdcCustNumberType[36];


///TFtdcOrganCodeType是一个机构编码类型

typedef char TThostFtdcOrganCodeType[36];


///TFtdcOrganNameType是一个机构名称类型

typedef char TThostFtdcOrganNameType[71];


///TFtdcSuperOrganCodeType是一个上级机构编码,即期货公司总部、银行总行类型

typedef char TThostFtdcSuperOrganCodeType[12];


///TFtdcSubBranchIDType是一个分支机构类型

typedef char TThostFtdcSubBranchIDType[31];


///TFtdcSubBranchNameType是一个分支机构名称类型

typedef char TThostFtdcSubBranchNameType[71];


///TFtdcBranchNetCodeType是一个机构网点号类型

typedef char TThostFtdcBranchNetCodeType[31];


///TFtdcBranchNetNameType是一个机构网点名称类型

typedef char TThostFtdcBranchNetNameType[71];


///TFtdcOrganFlagType是一个机构标识类型

typedef char TThostFtdcOrganFlagType[2];


///TFtdcBankCodingForFutureType是一个银行对期货公司的编码类型

typedef char TThostFtdcBankCodingForFutureType[33];


///TFtdcBankReturnCodeType是一个银行对返回码的定义类型

typedef char TThostFtdcBankReturnCodeType[7];


///TFtdcPlateReturnCodeType是一个银期转帐平台对返回码的定义类型

typedef char TThostFtdcPlateReturnCodeType[5];


///TFtdcBankSubBranchIDType是一个银行分支机构编码类型

typedef char TThostFtdcBankSubBranchIDType[31];


///TFtdcFutureBranchIDType是一个期货分支机构编码类型

typedef char TThostFtdcFutureBranchIDType[31];


///TFtdcReturnCodeType是一个返回代码类型

typedef char TThostFtdcReturnCodeType[7];


///TFtdcOperatorCodeType是一个操作员类型

typedef char TThostFtdcOperatorCodeType[17];


///TFtdcClearDepIDType是一个机构结算帐户机构号类型

typedef char TThostFtdcClearDepIDType[6];


///TFtdcClearBrchIDType是一个机构结算帐户联行号类型

typedef char TThostFtdcClearBrchIDType[6];


///TFtdcClearNameType是一个机构结算帐户名称类型

typedef char TThostFtdcClearNameType[71];


///TFtdcBankAccountNameType是一个银行帐户名称类型

typedef char TThostFtdcBankAccountNameType[71];


///TFtdcInvDepIDType是一个机构投资人账号机构号类型

typedef char TThostFtdcInvDepIDType[6];


///TFtdcInvBrchIDType是一个机构投资人联行号类型

typedef char TThostFtdcInvBrchIDType[6];


///TFtdcMessageFormatVersionType是一个信息格式版本类型

typedef char TThostFtdcMessageFormatVersionType[36];


///TFtdcDigestType是一个摘要类型

typedef char TThostFtdcDigestType[36];


///TFtdcAuthenticDataType是一个认证数据类型

typedef char TThostFtdcAuthenticDataType[129];


///TFtdcPasswordKeyType是一个密钥类型

typedef char TThostFtdcPasswordKeyType[129];


///TFtdcFutureAccountNameType是一个期货帐户名称类型

typedef char TThostFtdcFutureAccountNameType[129];


///TFtdcMobilePhoneType是一个手机类型

typedef char TThostFtdcMobilePhoneType[21];


///TFtdcFutureMainKeyType是一个期货公司主密钥类型

typedef char TThostFtdcFutureMainKeyType[129];


///TFtdcFutureWorkKeyType是一个期货公司工作密钥类型

typedef char TThostFtdcFutureWorkKeyType[129];


///TFtdcFutureTransKeyType是一个期货公司传输密钥类型

typedef char TThostFtdcFutureTransKeyType[129];


///TFtdcBankMainKeyType是一个银行主密钥类型

typedef char TThostFtdcBankMainKeyType[129];


///TFtdcBankWorkKeyType是一个银行工作密钥类型

typedef char TThostFtdcBankWorkKeyType[129];


///TFtdcBankTransKeyType是一个银行传输密钥类型

typedef char TThostFtdcBankTransKeyType[129];


///TFtdcBankServerDescriptionType是一个银行服务器描述信息类型

typedef char TThostFtdcBankServerDescriptionType[129];


///TFtdcAddInfoType是一个附加信息类型

typedef char TThostFtdcAddInfoType[129];


///TFtdcDescrInfoForReturnCodeType是一个返回码描述类型

typedef char TThostFtdcDescrInfoForReturnCodeType[129];


///TFtdcCountryCodeType是一个国家代码类型

typedef char TThostFtdcCountryCodeType[21];


///TFtdcSerialType是一个流水号类型

typedef int TThostFtdcSerialType;


///TFtdcPlateSerialType是一个平台流水号类型

typedef int TThostFtdcPlateSerialType;


///TFtdcBankSerialType是一个银行流水号类型

typedef char TThostFtdcBankSerialType[13];


///TFtdcCorrectSerialType是一个被冲正交易流水号类型

typedef int TThostFtdcCorrectSerialType;


///TFtdcFutureSerialType是一个期货公司流水号类型

typedef int TThostFtdcFutureSerialType;


///TFtdcApplicationIDType是一个应用标识类型

typedef int TThostFtdcApplicationIDType;


///TFtdcBankProxyIDType是一个银行代理标识类型

typedef int TThostFtdcBankProxyIDType;


///TFtdcFBTCoreIDType是一个银期转帐核心系统标识类型

typedef int TThostFtdcFBTCoreIDType;


///TFtdcServerPortType是一个服务端口号类型

typedef int TThostFtdcServerPortType;


///TFtdcRepealedTimesType是一个已经冲正次数类型

typedef int TThostFtdcRepealedTimesType;


///TFtdcRepealTimeIntervalType是一个冲正时间间隔类型

typedef int TThostFtdcRepealTimeIntervalType;


///TFtdcTotalTimesType是一个每日累计转帐次数类型

typedef int TThostFtdcTotalTimesType;


///TFtdcFBTRequestIDType是一个请求ID类型

typedef int TThostFtdcFBTRequestIDType;


///TFtdcTIDType是一个交易ID类型

typedef int TThostFtdcTIDType;


///TFtdcTradeAmountType是一个交易金额（元）类型

typedef double TThostFtdcTradeAmountType;


///TFtdcCustFeeType是一个应收客户费用（元）类型

typedef double TThostFtdcCustFeeType;


///TFtdcFutureFeeType是一个应收期货公司费用（元）类型

typedef double TThostFtdcFutureFeeType;


///TFtdcSingleMaxAmtType是一个单笔最高限额类型

typedef double TThostFtdcSingleMaxAmtType;


///TFtdcSingleMinAmtType是一个单笔最低限额类型

typedef double TThostFtdcSingleMinAmtType;


///TFtdcTotalAmtType是一个每日累计转帐额度类型

typedef double TThostFtdcTotalAmtType;


///TFtdcCertificationTypeType是一个证件类型类型

///身份证
#define THOST_FTDC_CFT_IDCard '0'
///护照
#define THOST_FTDC_CFT_Passport '1'
///军官证
#define THOST_FTDC_CFT_OfficerIDCard '2'
///士兵证
#define THOST_FTDC_CFT_SoldierIDCard '3'
///回乡证
#define THOST_FTDC_CFT_HomeComingCard '4'
///户口簿
#define THOST_FTDC_CFT_HouseholdRegister  '5'
///营业执照号
#define THOST_FTDC_CFT_LicenseNo '6'
///组织机构代码证
#define THOST_FTDC_CFT_InstitutionCodeCard '7'
///临时营业执照号
#define THOST_FTDC_CFT_TempLicenseNo '8'
///民办非企业登记证书
#define THOST_FTDC_CFT_NoEnterpriseLicenseNo '9'
///其他证件
#define THOST_FTDC_CFT_OtherCard 'x'
///主管部门批文
#define THOST_FTDC_CFT_SuperDepAgree 'a'

typedef char TThostFtdcCertificationTypeType;


///TFtdcFileBusinessCodeType是一个文件业务功能类型

///其他
#define THOST_FTDC_FBC_Others '0'
///转账交易明细对账
#define THOST_FTDC_FBC_TransferDetails '1'
///客户账户状态对账
#define THOST_FTDC_FBC_CustAccStatus '2'
///账户类交易明细对账
#define THOST_FTDC_FBC_AccountTradeDetails '3'
///期货账户信息变更明细对账
#define THOST_FTDC_FBC_FutureAccountChangeInfoDetails '4'
///客户资金台账余额明细对账
#define THOST_FTDC_FBC_CustMoneyDetail '5'
///客户销户结息明细对账
#define THOST_FTDC_FBC_CustCancelAccountInfo '6'
///客户资金余额对账结果
#define THOST_FTDC_FBC_CustMoneyResult '7'
///其它对账异常结果文件
#define THOST_FTDC_FBC_OthersExceptionResult '8'
///客户结息净额明细
#define THOST_FTDC_FBC_CustInterestNetMoneyDetails '9'
///客户资金交收明细
#define THOST_FTDC_FBC_CustMoneySendAndReceiveDetails 'a'
///法人存管银行资金交收汇总
#define THOST_FTDC_FBC_CorporationMoneyTotal 'b'
///主体间资金交收汇总
#define THOST_FTDC_FBC_MainbodyMoneyTotal 'c'
///总分平衡监管数据
#define THOST_FTDC_FBC_MainPartMonitorData 'd'
///存管银行备付金余额
#define THOST_FTDC_FBC_PreparationMoney 'e'
///协办存管银行资金监管数据
#define THOST_FTDC_FBC_BankMoneyMonitorData 'f'

typedef char TThostFtdcFileBusinessCodeType;


///TFtdcCashExchangeCodeType是一个汇钞标志类型

///汇
#define THOST_FTDC_CEC_Exchange '1'
///钞
#define THOST_FTDC_CEC_Cash '2'

typedef char TThostFtdcCashExchangeCodeType;


///TFtdcYesNoIndicatorType是一个是或否标识类型

///是
#define THOST_FTDC_YNI_Yes '0'
///否
#define THOST_FTDC_YNI_No '1'

typedef char TThostFtdcYesNoIndicatorType;


///TFtdcBanlanceTypeType是一个余额类型类型

///当前余额
#define THOST_FTDC_BLT_CurrentMoney '0'
///可用余额
#define THOST_FTDC_BLT_UsableMoney '1'
///可取余额
#define THOST_FTDC_BLT_FetchableMoney '2'
///冻结余额
#define THOST_FTDC_BLT_FreezeMoney '3'

typedef char TThostFtdcBanlanceTypeType;


///TFtdcGenderType是一个性别类型

///未知状态
#define THOST_FTDC_GD_Unknown '0'
///男
#define THOST_FTDC_GD_Male '1'
///女
#define THOST_FTDC_GD_Female '2'

typedef char TThostFtdcGenderType;


///TFtdcFeePayFlagType是一个费用支付标志类型

///由受益方支付费用
#define THOST_FTDC_FPF_BEN '0'
///由发送方支付费用
#define THOST_FTDC_FPF_OUR '1'
///由发送方支付发起的费用，受益方支付接受的费用
#define THOST_FTDC_FPF_SHA '2'

typedef char TThostFtdcFeePayFlagType;


///TFtdcPassWordKeyTypeType是一个密钥类型类型

///交换密钥
#define THOST_FTDC_PWKT_ExchangeKey '0'
///密码密钥
#define THOST_FTDC_PWKT_PassWordKey '1'
///MAC密钥
#define THOST_FTDC_PWKT_MACKey '2'
///报文密钥
#define THOST_FTDC_PWKT_MessageKey '3'

typedef char TThostFtdcPassWordKeyTypeType;


///TFtdcFBTPassWordTypeType是一个密码类型类型

///查询
#define THOST_FTDC_PWT_Query '0'
///取款
#define THOST_FTDC_PWT_Fetch '1'
///转帐
#define THOST_FTDC_PWT_Transfer '2'
///交易
#define THOST_FTDC_PWT_Trade '3'

typedef char TThostFtdcFBTPassWordTypeType;


///TFtdcFBTEncryModeType是一个加密方式类型

///不加密
#define THOST_FTDC_EM_NoEncry '0'
///DES
#define THOST_FTDC_EM_DES '1'
///3DES
#define THOST_FTDC_EM_3DES '2'

typedef char TThostFtdcFBTEncryModeType;


///TFtdcBankRepealFlagType是一个银行冲正标志类型

///银行无需自动冲正
#define THOST_FTDC_BRF_BankNotNeedRepeal '0'
///银行待自动冲正
#define THOST_FTDC_BRF_BankWaitingRepeal '1'
///银行已自动冲正
#define THOST_FTDC_BRF_BankBeenRepealed '2'

typedef char TThostFtdcBankRepealFlagType;


///TFtdcBrokerRepealFlagType是一个期商冲正标志类型

///期商无需自动冲正
#define THOST_FTDC_BRORF_BrokerNotNeedRepeal '0'
///期商待自动冲正
#define THOST_FTDC_BRORF_BrokerWaitingRepeal '1'
///期商已自动冲正
#define THOST_FTDC_BRORF_BrokerBeenRepealed '2'

typedef char TThostFtdcBrokerRepealFlagType;


///TFtdcInstitutionTypeType是一个机构类别类型

///银行
#define THOST_FTDC_TS_Bank '0'
///期商
#define THOST_FTDC_TS_Future '1'
///券商
#define THOST_FTDC_TS_Store '2'

typedef char TThostFtdcInstitutionTypeType;


///TFtdcLastFragmentType是一个最后分片标志类型

///是最后分片
#define THOST_FTDC_LF_Yes '0'
///不是最后分片
#define THOST_FTDC_LF_No '1'

typedef char TThostFtdcLastFragmentType;


///TFtdcBankAccStatusType是一个银行账户状态类型

///正常
#define THOST_FTDC_BAS_Normal '0'
///冻结
#define THOST_FTDC_BAS_Freeze '1'
///挂失
#define THOST_FTDC_BAS_ReportLoss '2'

typedef char TThostFtdcBankAccStatusType;


///TFtdcMoneyAccountStatusType是一个资金账户状态类型

///正常
#define THOST_FTDC_MAS_Normal '0'
///销户
#define THOST_FTDC_MAS_Cancel '1'

typedef char TThostFtdcMoneyAccountStatusType;


///TFtdcManageStatusType是一个存管状态类型

///指定存管
#define THOST_FTDC_MSS_Point '0'
///预指定
#define THOST_FTDC_MSS_PrePoint '1'
///撤销指定
#define THOST_FTDC_MSS_CancelPoint '2'

typedef char TThostFtdcManageStatusType;


///TFtdcSystemTypeType是一个应用系统类型类型

///银期转帐
#define THOST_FTDC_SYT_FutureBankTransfer '0'
///银证转帐
#define THOST_FTDC_SYT_StockBankTransfer '1'
///第三方存管
#define THOST_FTDC_SYT_TheThirdPartStore '2'

typedef char TThostFtdcSystemTypeType;


///TFtdcTxnEndFlagType是一个银期转帐划转结果标志类型

///正常处理中
#define THOST_FTDC_TEF_NormalProcessing '0'
///成功结束
#define THOST_FTDC_TEF_Success '1'
///失败结束
#define THOST_FTDC_TEF_Failed '2'
///异常中
#define THOST_FTDC_TEF_Abnormal '3'
///已人工异常处理
#define THOST_FTDC_TEF_ManualProcessedForException '4'
///通讯异常 ，请人工处理
#define THOST_FTDC_TEF_CommuFailedNeedManualProcess '5'
///系统出错，请人工处理
#define THOST_FTDC_TEF_SysErrorNeedManualProcess '6'

typedef char TThostFtdcTxnEndFlagType;


///TFtdcProcessStatusType是一个银期转帐服务处理状态类型

///未处理
#define THOST_FTDC_PSS_NotProcess '0'
///开始处理
#define THOST_FTDC_PSS_StartProcess '1'
///处理完成
#define THOST_FTDC_PSS_Finished '2'

typedef char TThostFtdcProcessStatusType;


///TFtdcCustTypeType是一个客户类型类型

///自然人
#define THOST_FTDC_CUSTT_Person '0'
///机构户
#define THOST_FTDC_CUSTT_Institution '1'

typedef char TThostFtdcCustTypeType;


///TFtdcFBTTransferDirectionType是一个银期转帐方向类型

///入金，银行转期货
#define THOST_FTDC_FBTTD_FromBankToFuture '1'
///出金，期货转银行
#define THOST_FTDC_FBTTD_FromFutureToBank '2'

typedef char TThostFtdcFBTTransferDirectionType;


///TFtdcOpenOrDestroyType是一个开销户类别类型

///开户
#define THOST_FTDC_OOD_Open '1'
///销户
#define THOST_FTDC_OOD_Destroy '0'

typedef char TThostFtdcOpenOrDestroyType;


///TFtdcAvailabilityFlagType是一个有效标志类型

///未确认
#define THOST_FTDC_AVAF_Invalid '0'
///有效
#define THOST_FTDC_AVAF_Valid '1'
///冲正
#define THOST_FTDC_AVAF_Repeal '2'

typedef char TThostFtdcAvailabilityFlagType;


///TFtdcOrganTypeType是一个机构类型类型

///银行代理
#define THOST_FTDC_OT_Bank '1'
///交易前置
#define THOST_FTDC_OT_Future '2'
///银期转帐平台管理
#define THOST_FTDC_OT_PlateForm '9'

typedef char TThostFtdcOrganTypeType;


///TFtdcOrganLevelType是一个机构级别类型

///银行总行或期商总部
#define THOST_FTDC_OL_HeadQuarters '1'
///银行分中心或期货公司营业部
#define THOST_FTDC_OL_Branch '2'

typedef char TThostFtdcOrganLevelType;


///TFtdcProtocalIDType是一个协议类型类型

///期商协议
#define THOST_FTDC_PID_FutureProtocal '0'
///工行协议
#define THOST_FTDC_PID_ICBCProtocal '1'
///农行协议
#define THOST_FTDC_PID_ABCProtocal '2'
///中国银行协议
#define THOST_FTDC_PID_CBCProtocal '3'
///建行协议
#define THOST_FTDC_PID_CCBProtocal '4'
///交行协议
#define THOST_FTDC_PID_BOCOMProtocal '5'
///银期转帐平台协议
#define THOST_FTDC_PID_FBTPlateFormProtocal 'X'

typedef char TThostFtdcProtocalIDType;


///TFtdcConnectModeType是一个套接字连接方式类型

///短连接
#define THOST_FTDC_CM_ShortConnect '0'
///长连接
#define THOST_FTDC_CM_LongConnect '1'

typedef char TThostFtdcConnectModeType;


///TFtdcSyncModeType是一个套接字通信方式类型

///异步
#define THOST_FTDC_SRM_ASync '0'
///同步
#define THOST_FTDC_SRM_Sync '1'

typedef char TThostFtdcSyncModeType;


///TFtdcBankAccTypeType是一个银行帐号类型类型

///银行存折
#define THOST_FTDC_BAT_BankBook '1'
///储蓄卡
#define THOST_FTDC_BAT_SavingCard '2'
///信用卡
#define THOST_FTDC_BAT_CreditCard '3'

typedef char TThostFtdcBankAccTypeType;


///TFtdcFutureAccTypeType是一个期货公司帐号类型类型

///银行存折
#define THOST_FTDC_FAT_BankBook '1'
///储蓄卡
#define THOST_FTDC_FAT_SavingCard '2'
///信用卡
#define THOST_FTDC_FAT_CreditCard '3'

typedef char TThostFtdcFutureAccTypeType;


///TFtdcOrganStatusType是一个接入机构状态类型

///启用
#define THOST_FTDC_OS_Ready '0'
///签到
#define THOST_FTDC_OS_CheckIn '1'
///签退
#define THOST_FTDC_OS_CheckOut '2'
///对帐文件到达
#define THOST_FTDC_OS_CheckFileArrived '3'
///对帐
#define THOST_FTDC_OS_CheckDetail '4'
///日终清理
#define THOST_FTDC_OS_DayEndClean '5'
///注销
#define THOST_FTDC_OS_Invalid '9'

typedef char TThostFtdcOrganStatusType;


///TFtdcCCBFeeModeType是一个建行收费模式类型

///按金额扣收
#define THOST_FTDC_CCBFM_ByAmount '1'
///按月扣收
#define THOST_FTDC_CCBFM_ByMonth '2'

typedef char TThostFtdcCCBFeeModeType;


///TFtdcCommApiTypeType是一个通讯API类型类型

///客户端
#define THOST_FTDC_CAPIT_Client '1'
///服务端
#define THOST_FTDC_CAPIT_Server '2'
///交易系统的UserApi
#define THOST_FTDC_CAPIT_UserApi '3'

typedef char TThostFtdcCommApiTypeType;


///TFtdcServiceIDType是一个服务编号类型

typedef int TThostFtdcServiceIDType;


///TFtdcServiceLineNoType是一个服务线路编号类型

typedef int TThostFtdcServiceLineNoType;


///TFtdcServiceNameType是一个服务名类型

typedef char TThostFtdcServiceNameType[61];


///TFtdcLinkStatusType是一个连接状态类型

///已经连接
#define THOST_FTDC_LS_Connected '1'
///没有连接
#define THOST_FTDC_LS_Disconnected '2'

typedef char TThostFtdcLinkStatusType;


///TFtdcCommApiPointerType是一个通讯API指针类型

typedef int TThostFtdcCommApiPointerType;


///TFtdcPwdFlagType是一个密码核对标志类型

///不核对
#define THOST_FTDC_BPWDF_NoCheck '0'
///明文核对
#define THOST_FTDC_BPWDF_BlankCheck '1'
///密文核对
#define THOST_FTDC_BPWDF_EncryptCheck '2'

typedef char TThostFtdcPwdFlagType;


///TFtdcSecuAccTypeType是一个期货帐号类型类型

///资金帐号
#define THOST_FTDC_SAT_AccountID '1'
///资金卡号
#define THOST_FTDC_SAT_CardID '2'
///上海股东帐号
#define THOST_FTDC_SAT_SHStockholderID '3'
///深圳股东帐号
#define THOST_FTDC_SAT_SZStockholderID '4'

typedef char TThostFtdcSecuAccTypeType;


///TFtdcTransferStatusType是一个转账交易状态类型

///正常
#define THOST_FTDC_TRFS_Normal '0'
///被冲正
#define THOST_FTDC_TRFS_Repealed '1'

typedef char TThostFtdcTransferStatusType;


///TFtdcSponsorTypeType是一个发起方类型

///期商
#define THOST_FTDC_SPTYPE_Broker '0'
///银行
#define THOST_FTDC_SPTYPE_Bank '1'

typedef char TThostFtdcSponsorTypeType;


///TFtdcReqRspTypeType是一个请求响应类别类型

///请求
#define THOST_FTDC_REQRSP_Request '0'
///响应
#define THOST_FTDC_REQRSP_Response '1'

typedef char TThostFtdcReqRspTypeType;


///TFtdcFBTUserEventTypeType是一个银期转帐用户事件类型类型

///签到
#define THOST_FTDC_FBTUET_SignIn '0'
///银行转期货
#define THOST_FTDC_FBTUET_FromBankToFuture '1'
///期货转银行
#define THOST_FTDC_FBTUET_FromFutureToBank '2'
///开户
#define THOST_FTDC_FBTUET_OpenAccount '3'
///销户
#define THOST_FTDC_FBTUET_CancelAccount '4'
///变更银行账户
#define THOST_FTDC_FBTUET_ChangeAccount '5'
///冲正银行转期货
#define THOST_FTDC_FBTUET_RepealFromBankToFuture '6'
///冲正期货转银行
#define THOST_FTDC_FBTUET_RepealFromFutureToBank '7'
///查询银行账户
#define THOST_FTDC_FBTUET_QueryBankAccount '8'
///查询期货账户
#define THOST_FTDC_FBTUET_QueryFutureAccount '9'
///签退
#define THOST_FTDC_FBTUET_SignOut 'A'
///密钥同步
#define THOST_FTDC_FBTUET_SyncKey 'B'
///其他
#define THOST_FTDC_FBTUET_Other 'Z'

typedef char TThostFtdcFBTUserEventTypeType;


///TFtdcBankIDByBankType是一个银行自己的编码类型

typedef char TThostFtdcBankIDByBankType[21];


///TFtdcBankOperNoType是一个银行操作员号类型

typedef char TThostFtdcBankOperNoType[4];


///TFtdcBankCustNoType是一个银行客户号类型

typedef char TThostFtdcBankCustNoType[21];


///TFtdcDBOPSeqNoType是一个递增的序列号类型

typedef int TThostFtdcDBOPSeqNoType;


///TFtdcTableNameType是一个FBT表名类型

typedef char TThostFtdcTableNameType[61];


///TFtdcPKNameType是一个FBT表操作主键名类型

typedef char TThostFtdcPKNameType[201];


///TFtdcPKValueType是一个FBT表操作主键值类型

typedef char TThostFtdcPKValueType[501];


///TFtdcDBOperationType是一个记录操作类型类型

///插入
#define THOST_FTDC_DBOP_Insert '0'
///更新
#define THOST_FTDC_DBOP_Update '1'
///删除
#define THOST_FTDC_DBOP_Delete '2'

typedef char TThostFtdcDBOperationType;


///TFtdcSyncFlagType是一个同步标记类型

///已同步
#define THOST_FTDC_SYNF_Yes '0'
///未同步
#define THOST_FTDC_SYNF_No '1'

typedef char TThostFtdcSyncFlagType;


///TFtdcTargetIDType是一个同步目标编号类型

typedef char TThostFtdcTargetIDType[4];


///TFtdcSyncTypeType是一个同步类型类型

///一次同步
#define THOST_FTDC_SYNT_OneOffSync '0'
///定时同步
#define THOST_FTDC_SYNT_TimerSync '1'
///定时完全同步
#define THOST_FTDC_SYNT_TimerFullSync '2'

typedef char TThostFtdcSyncTypeType;


///TFtdcFBETimeType是一个各种换汇时间类型

typedef char TThostFtdcFBETimeType[7];


///TFtdcFBEBankNoType是一个换汇银行行号类型

typedef char TThostFtdcFBEBankNoType[13];


///TFtdcFBECertNoType是一个换汇凭证号类型

typedef char TThostFtdcFBECertNoType[13];


///TFtdcExDirectionType是一个换汇方向类型

///结汇
#define THOST_FTDC_FBEDIR_Settlement '0'
///售汇
#define THOST_FTDC_FBEDIR_Sale '1'

typedef char TThostFtdcExDirectionType;


///TFtdcFBEBankAccountType是一个换汇银行账户类型

typedef char TThostFtdcFBEBankAccountType[33];


///TFtdcFBEBankAccountNameType是一个换汇银行账户名类型

typedef char TThostFtdcFBEBankAccountNameType[61];


///TFtdcFBEAmtType是一个各种换汇金额类型

typedef double TThostFtdcFBEAmtType;


///TFtdcFBEBusinessTypeType是一个换汇业务类型类型

typedef char TThostFtdcFBEBusinessTypeType[3];


///TFtdcFBEPostScriptType是一个换汇附言类型

typedef char TThostFtdcFBEPostScriptType[61];


///TFtdcFBERemarkType是一个换汇备注类型

typedef char TThostFtdcFBERemarkType[71];


///TFtdcExRateType是一个换汇汇率类型

typedef double TThostFtdcExRateType;


///TFtdcFBEResultFlagType是一个换汇成功标志类型

///成功
#define THOST_FTDC_FBERES_Success '0'
///账户余额不足
#define THOST_FTDC_FBERES_InsufficientBalance '1'
///交易结果未知
#define THOST_FTDC_FBERES_UnknownTrading '8'
///失败
#define THOST_FTDC_FBERES_Fail 'x'

typedef char TThostFtdcFBEResultFlagType;


///TFtdcFBERtnMsgType是一个换汇返回信息类型

typedef char TThostFtdcFBERtnMsgType[61];


///TFtdcFBEExtendMsgType是一个换汇扩展信息类型

typedef char TThostFtdcFBEExtendMsgType[61];


///TFtdcFBEBusinessSerialType是一个换汇记账流水号类型

typedef char TThostFtdcFBEBusinessSerialType[31];


///TFtdcFBESystemSerialType是一个换汇流水号类型

typedef char TThostFtdcFBESystemSerialType[21];


///TFtdcFBETotalExCntType是一个换汇交易总笔数类型

typedef int TThostFtdcFBETotalExCntType;


///TFtdcFBEExchStatusType是一个换汇交易状态类型

///正常
#define THOST_FTDC_FBEES_Normal '0'
///交易重发
#define THOST_FTDC_FBEES_ReExchange '1'

typedef char TThostFtdcFBEExchStatusType;


///TFtdcFBEFileFlagType是一个换汇文件标志类型

///数据包
#define THOST_FTDC_FBEFG_DataPackage '0'
///文件
#define THOST_FTDC_FBEFG_File '1'

typedef char TThostFtdcFBEFileFlagType;


///TFtdcFBEAlreadyTradeType是一个换汇已交易标志类型

///未交易
#define THOST_FTDC_FBEAT_NotTrade '0'
///已交易
#define THOST_FTDC_FBEAT_Trade '1'

typedef char TThostFtdcFBEAlreadyTradeType;


///TFtdcFBEOpenBankType是一个换汇账户开户行类型

typedef char TThostFtdcFBEOpenBankType[61];


///TFtdcFBEUserEventTypeType是一个银期换汇用户事件类型类型

///签到
#define THOST_FTDC_FBEUET_SignIn '0'
///换汇
#define THOST_FTDC_FBEUET_Exchange '1'
///换汇重发
#define THOST_FTDC_FBEUET_ReExchange '2'
///银行账户查询
#define THOST_FTDC_FBEUET_QueryBankAccount '3'
///换汇明细查询
#define THOST_FTDC_FBEUET_QueryExchDetial '4'
///换汇汇总查询
#define THOST_FTDC_FBEUET_QueryExchSummary '5'
///换汇汇率查询
#define THOST_FTDC_FBEUET_QueryExchRate '6'
///对账文件通知
#define THOST_FTDC_FBEUET_CheckBankAccount '7'
///签退
#define THOST_FTDC_FBEUET_SignOut '8'
///其他
#define THOST_FTDC_FBEUET_Other 'Z'

typedef char TThostFtdcFBEUserEventTypeType;


///TFtdcFBEFileNameType是一个换汇相关文件名类型

typedef char TThostFtdcFBEFileNameType[21];


///TFtdcFBEBatchSerialType是一个换汇批次号类型

typedef char TThostFtdcFBEBatchSerialType[21];


///TFtdcFBEReqFlagType是一个换汇发送标志类型

///未处理
#define THOST_FTDC_FBERF_UnProcessed '0'
///等待发送
#define THOST_FTDC_FBERF_WaitSend '1'
///发送成功
#define THOST_FTDC_FBERF_SendSuccess '2'
///发送失败
#define THOST_FTDC_FBERF_SendFailed '3'
///等待重发
#define THOST_FTDC_FBERF_WaitReSend '4'

typedef char TThostFtdcFBEReqFlagType;


///TFtdcNotifyClassType是一个风险通知类型类型

///正常
#define THOST_FTDC_NC_NOERROR '0'
///警示
#define THOST_FTDC_NC_Warn '1'
///追保
#define THOST_FTDC_NC_Call '2'
///强平
#define THOST_FTDC_NC_Force '3'
///穿仓
#define THOST_FTDC_NC_CHUANCANG '4'
///异常
#define THOST_FTDC_NC_Exception '5'

typedef char TThostFtdcNotifyClassType;


///TFtdcRiskNofityInfoType是一个客户风险通知消息类型

typedef char TThostFtdcRiskNofityInfoType[257];


///TFtdcForceCloseSceneIdType是一个强平场景编号类型

typedef char TThostFtdcForceCloseSceneIdType[24];


///TFtdcForceCloseTypeType是一个强平单类型类型

///手工强平
#define THOST_FTDC_FCT_Manual '0'
///单一投资者辅助强平
#define THOST_FTDC_FCT_Single '1'
///批量投资者辅助强平
#define THOST_FTDC_FCT_Group '2'

typedef char TThostFtdcForceCloseTypeType;


///TFtdcInstrumentIDsType是一个多个产品代码,用+分隔,如cu+zn类型

typedef char TThostFtdcInstrumentIDsType[101];


///TFtdcRiskNotifyMethodType是一个风险通知途径类型

///系统通知
#define THOST_FTDC_RNM_System '0'
///短信通知
#define THOST_FTDC_RNM_SMS '1'
///邮件通知
#define THOST_FTDC_RNM_EMail '2'
///人工通知
#define THOST_FTDC_RNM_Manual '3'

typedef char TThostFtdcRiskNotifyMethodType;


///TFtdcRiskNotifyStatusType是一个风险通知状态类型

///未生成
#define THOST_FTDC_RNS_NotGen '0'
///已生成未发送
#define THOST_FTDC_RNS_Generated '1'
///发送失败
#define THOST_FTDC_RNS_SendError '2'
///已发送未接收
#define THOST_FTDC_RNS_SendOk '3'
///已接收未确认
#define THOST_FTDC_RNS_Received '4'
///已确认
#define THOST_FTDC_RNS_Confirmed '5'

typedef char TThostFtdcRiskNotifyStatusType;


///TFtdcRiskUserEventType是一个风控用户操作事件类型

///导出数据
#define THOST_FTDC_RUE_ExportData '0'

typedef char TThostFtdcRiskUserEventType;


///TFtdcParamIDType是一个参数代码类型

typedef int TThostFtdcParamIDType;


///TFtdcParamNameType是一个参数名类型

typedef char TThostFtdcParamNameType[41];


///TFtdcParamValueType是一个参数值类型

typedef char TThostFtdcParamValueType[41];


///TFtdcConditionalOrderSortTypeType是一个条件单索引条件类型

///使用最新价升序
#define THOST_FTDC_COST_LastPriceAsc '0'
///使用最新价降序
#define THOST_FTDC_COST_LastPriceDesc '1'
///使用卖价升序
#define THOST_FTDC_COST_AskPriceAsc '2'
///使用卖价降序
#define THOST_FTDC_COST_AskPriceDesc '3'
///使用买价升序
#define THOST_FTDC_COST_BidPriceAsc '4'
///使用买价降序
#define THOST_FTDC_COST_BidPriceDesc '5'

typedef char TThostFtdcConditionalOrderSortTypeType;


///TFtdcSendTypeType是一个报送状态类型

///未发送
#define THOST_FTDC_UOAST_NoSend '0'
///已发送
#define THOST_FTDC_UOAST_Sended '1'
///已生成
#define THOST_FTDC_UOAST_Generated '2'
///报送失败
#define THOST_FTDC_UOAST_SendFail '3'
///接收成功
#define THOST_FTDC_UOAST_Success '4'
///接收失败
#define THOST_FTDC_UOAST_Fail '5'
///取消报送
#define THOST_FTDC_UOAST_Cancel '6'

typedef char TThostFtdcSendTypeType;


///TFtdcClientIDStatusType是一个交易编码状态类型

///未申请
#define THOST_FTDC_UOACS_NoApply '1'
///已提交申请
#define THOST_FTDC_UOACS_Submited '2'
///已发送申请
#define THOST_FTDC_UOACS_Sended '3'
///完成
#define THOST_FTDC_UOACS_Success '4'
///拒绝
#define THOST_FTDC_UOACS_Refuse '5'
///已撤销编码
#define THOST_FTDC_UOACS_Cancel '6'

typedef char TThostFtdcClientIDStatusType;


///TFtdcIndustryIDType是一个行业编码类型

typedef char TThostFtdcIndustryIDType[17];


///TFtdcQuestionIDType是一个特有信息编号类型

typedef char TThostFtdcQuestionIDType[5];


///TFtdcQuestionContentType是一个特有信息说明类型

typedef char TThostFtdcQuestionContentType[41];


///TFtdcOptionIDType是一个选项编号类型

typedef char TThostFtdcOptionIDType[13];


///TFtdcOptionContentType是一个选项说明类型

typedef char TThostFtdcOptionContentType[61];


///TFtdcQuestionTypeType是一个特有信息类型类型

///单选
#define THOST_FTDC_QT_Radio '1'
///多选
#define THOST_FTDC_QT_Option '2'
///填空
#define THOST_FTDC_QT_Blank '3'

typedef char TThostFtdcQuestionTypeType;


///TFtdcProcessIDType是一个业务流水号类型

typedef char TThostFtdcProcessIDType[33];


///TFtdcSeqNoType是一个流水号类型

typedef int TThostFtdcSeqNoType;


///TFtdcUOAProcessStatusType是一个流程状态类型

typedef char TThostFtdcUOAProcessStatusType[3];


///TFtdcProcessTypeType是一个流程功能类型类型

typedef char TThostFtdcProcessTypeType[3];


///TFtdcBusinessTypeType是一个业务类型类型

///请求
#define THOST_FTDC_BT_Request '1'
///应答
#define THOST_FTDC_BT_Response '2'
///通知
#define THOST_FTDC_BT_Notice '3'

typedef char TThostFtdcBusinessTypeType;


///TFtdcCfmmcReturnCodeType是一个监控中心返回码类型

///成功
#define THOST_FTDC_CRC_Success '0'
///该客户已经有流程在处理中
#define THOST_FTDC_CRC_Working '1'
///监控中客户资料检查失败
#define THOST_FTDC_CRC_InfoFail '2'
///监控中实名制检查失败
#define THOST_FTDC_CRC_IDCardFail '3'
///其他错误
#define THOST_FTDC_CRC_OtherFail '4'

typedef char TThostFtdcCfmmcReturnCodeType;


///TFtdcExReturnCodeType是一个交易所返回码类型

typedef int TThostFtdcExReturnCodeType;


///TFtdcClientTypeType是一个客户类型类型

///所有
#define THOST_FTDC_CfMMCCT_All '0'
///个人
#define THOST_FTDC_CfMMCCT_Person '1'
///单位
#define THOST_FTDC_CfMMCCT_Company '2'
///其他
#define THOST_FTDC_CfMMCCT_Other '3'
///特殊法人
#define THOST_FTDC_CfMMCCT_SpecialOrgan '4'
///资管户
#define THOST_FTDC_CfMMCCT_Asset '5'

typedef char TThostFtdcClientTypeType;


///TFtdcExchangeIDTypeType是一个交易所编号类型

///上海期货交易所
#define THOST_FTDC_EIDT_SHFE 'S'
///郑州商品交易所
#define THOST_FTDC_EIDT_CZCE 'Z'
///大连商品交易所
#define THOST_FTDC_EIDT_DCE 'D'
///中国金融期货交易所
#define THOST_FTDC_EIDT_CFFEX 'J'
///上海国际能源交易中心股份有限公司
#define THOST_FTDC_EIDT_INE 'N'

typedef char TThostFtdcExchangeIDTypeType;


///TFtdcExClientIDTypeType是一个交易编码类型类型

///套保
#define THOST_FTDC_ECIDT_Hedge '1'
///套利
#define THOST_FTDC_ECIDT_Arbitrage '2'
///投机
#define THOST_FTDC_ECIDT_Speculation '3'

typedef char TThostFtdcExClientIDTypeType;


///TFtdcClientClassifyType是一个客户分类码类型

typedef char TThostFtdcClientClassifyType[11];


///TFtdcUOAOrganTypeType是一个单位性质类型

typedef char TThostFtdcUOAOrganTypeType[11];


///TFtdcUOACountryCodeType是一个国家代码类型

typedef char TThostFtdcUOACountryCodeType[11];


///TFtdcAreaCodeType是一个区号类型

typedef char TThostFtdcAreaCodeType[11];


///TFtdcFuturesIDType是一个监控中心为客户分配的代码类型

typedef char TThostFtdcFuturesIDType[21];


///TFtdcCffmcDateType是一个日期类型

typedef char TThostFtdcCffmcDateType[11];


///TFtdcCffmcTimeType是一个时间类型

typedef char TThostFtdcCffmcTimeType[11];


///TFtdcNocIDType是一个组织机构代码类型

typedef char TThostFtdcNocIDType[21];


///TFtdcUpdateFlagType是一个更新状态类型

///未更新
#define THOST_FTDC_UF_NoUpdate '0'
///更新全部信息成功
#define THOST_FTDC_UF_Success '1'
///更新全部信息失败
#define THOST_FTDC_UF_Fail '2'
///更新交易编码成功
#define THOST_FTDC_UF_TCSuccess '3'
///更新交易编码失败
#define THOST_FTDC_UF_TCFail '4'
///已丢弃
#define THOST_FTDC_UF_Cancel '5'

typedef char TThostFtdcUpdateFlagType;


///TFtdcApplyOperateIDType是一个申请动作类型

///开户
#define THOST_FTDC_AOID_OpenInvestor '1'
///修改身份信息
#define THOST_FTDC_AOID_ModifyIDCard '2'
///修改一般信息
#define THOST_FTDC_AOID_ModifyNoIDCard '3'
///申请交易编码
#define THOST_FTDC_AOID_ApplyTradingCode '4'
///撤销交易编码
#define THOST_FTDC_AOID_CancelTradingCode '5'
///销户
#define THOST_FTDC_AOID_CancelInvestor '6'
///账户休眠
#define THOST_FTDC_AOID_FreezeAccount '8'
///激活休眠账户
#define THOST_FTDC_AOID_ActiveFreezeAccount '9'

typedef char TThostFtdcApplyOperateIDType;


///TFtdcApplyStatusIDType是一个申请状态类型

///未补全
#define THOST_FTDC_ASID_NoComplete '1'
///已提交
#define THOST_FTDC_ASID_Submited '2'
///已审核
#define THOST_FTDC_ASID_Checked '3'
///已拒绝
#define THOST_FTDC_ASID_Refused '4'
///已删除
#define THOST_FTDC_ASID_Deleted '5'

typedef char TThostFtdcApplyStatusIDType;


///TFtdcSendMethodType是一个发送方式类型

///文件发送
#define THOST_FTDC_UOASM_ByAPI '1'
///电子发送
#define THOST_FTDC_UOASM_ByFile '2'

typedef char TThostFtdcSendMethodType;


///TFtdcEventTypeType是一个业务操作类型类型

typedef char TThostFtdcEventTypeType[33];


///TFtdcEventModeType是一个操作方法类型

///增加
#define THOST_FTDC_EvM_ADD '1'
///修改
#define THOST_FTDC_EvM_UPDATE '2'
///删除
#define THOST_FTDC_EvM_DELETE '3'
///复核
#define THOST_FTDC_EvM_CHECK '4'
///复制
#define THOST_FTDC_EvM_COPY '5'
///注销
#define THOST_FTDC_EvM_CANCEL '6'
///冲销
#define THOST_FTDC_EvM_Reverse '7'

typedef char TThostFtdcEventModeType;


///TFtdcUOAAutoSendType是一个统一开户申请自动发送类型

///自动发送并接收
#define THOST_FTDC_UOAA_ASR '1'
///自动发送，不自动接收
#define THOST_FTDC_UOAA_ASNR '2'
///不自动发送，自动接收
#define THOST_FTDC_UOAA_NSAR '3'
///不自动发送，也不自动接收
#define THOST_FTDC_UOAA_NSR '4'

typedef char TThostFtdcUOAAutoSendType;


///TFtdcQueryDepthType是一个查询深度类型

typedef int TThostFtdcQueryDepthType;


///TFtdcDataCenterIDType是一个数据中心代码类型

typedef int TThostFtdcDataCenterIDType;


///TFtdcFlowIDType是一个流程ID类型

///投资者对应投资者组设置
#define THOST_FTDC_EvM_InvestorGroupFlow '1'
///投资者手续费率设置
#define THOST_FTDC_EvM_InvestorRate '2'
///投资者手续费率模板关系设置
#define THOST_FTDC_EvM_InvestorCommRateModel '3'

typedef char TThostFtdcFlowIDType;


///TFtdcCheckLevelType是一个复核级别类型

///零级复核
#define THOST_FTDC_CL_Zero '0'
///一级复核
#define THOST_FTDC_CL_One '1'
///二级复核
#define THOST_FTDC_CL_Two '2'

typedef char TThostFtdcCheckLevelType;


///TFtdcCheckNoType是一个操作次数类型

typedef int TThostFtdcCheckNoType;


///TFtdcCheckStatusType是一个复核级别类型

///未复核
#define THOST_FTDC_CHS_Init '0'
///复核中
#define THOST_FTDC_CHS_Checking '1'
///已复核
#define THOST_FTDC_CHS_Checked '2'
///拒绝
#define THOST_FTDC_CHS_Refuse '3'
///作废
#define THOST_FTDC_CHS_Cancel '4'

typedef char TThostFtdcCheckStatusType;


///TFtdcUsedStatusType是一个生效状态类型

///未生效
#define THOST_FTDC_CHU_Unused '0'
///已生效
#define THOST_FTDC_CHU_Used '1'
///生效失败
#define THOST_FTDC_CHU_Fail '2'

typedef char TThostFtdcUsedStatusType;


///TFtdcRateTemplateNameType是一个模型名称类型

typedef char TThostFtdcRateTemplateNameType[61];


///TFtdcPropertyStringType是一个用于查询的投资属性字段类型

typedef char TThostFtdcPropertyStringType[2049];


///TFtdcBankAcountOriginType是一个账户来源类型

///手工录入
#define THOST_FTDC_BAO_ByAccProperty '0'
///银期转账
#define THOST_FTDC_BAO_ByFBTransfer '1'

typedef char TThostFtdcBankAcountOriginType;


///TFtdcMonthBillTradeSumType是一个结算单月报成交汇总方式类型

///同日同合约
#define THOST_FTDC_MBTS_ByInstrument '0'
///同日同合约同价格
#define THOST_FTDC_MBTS_ByDayInsPrc '1'
///同合约
#define THOST_FTDC_MBTS_ByDayIns '2'

typedef char TThostFtdcMonthBillTradeSumType;


///TFtdcFBTTradeCodeEnumType是一个银期交易代码枚举类型

///银行发起银行转期货
#define THOST_FTDC_FTC_BankLaunchBankToBroker '102001'
///期货发起银行转期货
#define THOST_FTDC_FTC_BrokerLaunchBankToBroker '202001'
///银行发起期货转银行
#define THOST_FTDC_FTC_BankLaunchBrokerToBank '102002'
///期货发起期货转银行
#define THOST_FTDC_FTC_BrokerLaunchBrokerToBank '202002'

typedef char TThostFtdcFBTTradeCodeEnumType;


///TFtdcRateTemplateIDType是一个模型代码类型

typedef char TThostFtdcRateTemplateIDType[9];


///TFtdcRiskRateType是一个风险度类型

typedef char TThostFtdcRiskRateType[21];


///TFtdcTimestampType是一个时间戳类型

typedef int TThostFtdcTimestampType;


///TFtdcInvestorIDRuleNameType是一个号段规则名称类型

typedef char TThostFtdcInvestorIDRuleNameType[61];


///TFtdcInvestorIDRuleExprType是一个号段规则表达式类型

typedef char TThostFtdcInvestorIDRuleExprType[513];


///TFtdcLastDriftType是一个上次OTP漂移值类型

typedef int TThostFtdcLastDriftType;


///TFtdcLastSuccessType是一个上次OTP成功值类型

typedef int TThostFtdcLastSuccessType;


///TFtdcAuthKeyType是一个令牌密钥类型

typedef char TThostFtdcAuthKeyType[41];


///TFtdcSerialNumberType是一个序列号类型

typedef char TThostFtdcSerialNumberType[17];


///TFtdcOTPTypeType是一个动态令牌类型类型

///无动态令牌
#define THOST_FTDC_OTP_NONE '0'
///时间令牌
#define THOST_FTDC_OTP_TOTP '1'

typedef char TThostFtdcOTPTypeType;


///TFtdcOTPVendorsIDType是一个动态令牌提供商类型

typedef char TThostFtdcOTPVendorsIDType[2];


///TFtdcOTPVendorsNameType是一个动态令牌提供商名称类型

typedef char TThostFtdcOTPVendorsNameType[61];


///TFtdcOTPStatusType是一个动态令牌状态类型

///未使用
#define THOST_FTDC_OTPS_Unused '0'
///已使用
#define THOST_FTDC_OTPS_Used '1'
///注销
#define THOST_FTDC_OTPS_Disuse '2'

typedef char TThostFtdcOTPStatusType;


///TFtdcBrokerUserTypeType是一个经济公司用户类型类型

///投资者
#define THOST_FTDC_BUT_Investor '1'
///操作员
#define THOST_FTDC_BUT_BrokerUser '2'

typedef char TThostFtdcBrokerUserTypeType;


///TFtdcFutureTypeType是一个期货类型类型

///商品期货
#define THOST_FTDC_FUTT_Commodity '1'
///金融期货
#define THOST_FTDC_FUTT_Financial '2'

typedef char TThostFtdcFutureTypeType;


///TFtdcFundEventTypeType是一个资金管理操作类型类型

///转账限额
#define THOST_FTDC_FET_Restriction '0'
///当日转账限额
#define THOST_FTDC_FET_TodayRestriction '1'
///期商流水
#define THOST_FTDC_FET_Transfer '2'
///资金冻结
#define THOST_FTDC_FET_Credit '3'
///投资者可提资金比例
#define THOST_FTDC_FET_InvestorWithdrawAlm '4'
///单个银行帐户转账限额
#define THOST_FTDC_FET_BankRestriction '5'
///银期签约账户
#define THOST_FTDC_FET_Accountregister '6'
///交易所出入金
#define THOST_FTDC_FET_ExchangeFundIO '7'
///投资者出入金
#define THOST_FTDC_FET_InvestorFundIO '8'

typedef char TThostFtdcFundEventTypeType;


///TFtdcAccountSourceTypeType是一个资金账户来源类型

///银期同步
#define THOST_FTDC_AST_FBTransfer '0'
///手工录入
#define THOST_FTDC_AST_ManualEntry '1'

typedef char TThostFtdcAccountSourceTypeType;


///TFtdcCodeSourceTypeType是一个交易编码来源类型

///统一开户(已规范)
#define THOST_FTDC_CST_UnifyAccount '0'
///手工录入(未规范)
#define THOST_FTDC_CST_ManualEntry '1'

typedef char TThostFtdcCodeSourceTypeType;


///TFtdcUserRangeType是一个操作员范围类型

///所有
#define THOST_FTDC_UR_All '0'
///单一操作员
#define THOST_FTDC_UR_Single '1'

typedef char TThostFtdcUserRangeType;


///TFtdcTimeSpanType是一个时间跨度类型

typedef char TThostFtdcTimeSpanType[9];


///TFtdcImportSequenceIDType是一个动态令牌导入批次编号类型

typedef char TThostFtdcImportSequenceIDType[17];


///TFtdcByGroupType是一个交易统计表按客户统计方式类型

///按投资者统计
#define THOST_FTDC_BG_Investor '2'
///按类统计
#define THOST_FTDC_BG_Group '1'

typedef char TThostFtdcByGroupType;


///TFtdcTradeSumStatModeType是一个交易统计表按范围统计方式类型

///按合约统计
#define THOST_FTDC_TSSM_Instrument '1'
///按产品统计
#define THOST_FTDC_TSSM_Product '2'
///按交易所统计
#define THOST_FTDC_TSSM_Exchange '3'

typedef char TThostFtdcTradeSumStatModeType;


///TFtdcComTypeType是一个组合成交类型类型

typedef int TThostFtdcComTypeType;


///TFtdcUserProductIDType是一个产品标识类型

typedef char TThostFtdcUserProductIDType[33];


///TFtdcUserProductNameType是一个产品名称类型

typedef char TThostFtdcUserProductNameType[65];


///TFtdcUserProductMemoType是一个产品说明类型

typedef char TThostFtdcUserProductMemoType[129];


///TFtdcCSRCCancelFlagType是一个新增或变更标志类型

typedef char TThostFtdcCSRCCancelFlagType[2];


///TFtdcCSRCDateType是一个日期类型

typedef char TThostFtdcCSRCDateType[11];


///TFtdcCSRCInvestorNameType是一个客户名称类型

typedef char TThostFtdcCSRCInvestorNameType[201];


///TFtdcCSRCOpenInvestorNameType是一个客户名称类型

typedef char TThostFtdcCSRCOpenInvestorNameType[101];


///TFtdcCSRCInvestorIDType是一个客户代码类型

typedef char TThostFtdcCSRCInvestorIDType[13];


///TFtdcCSRCIdentifiedCardNoType是一个证件号码类型

typedef char TThostFtdcCSRCIdentifiedCardNoType[51];


///TFtdcCSRCClientIDType是一个交易编码类型

typedef char TThostFtdcCSRCClientIDType[11];


///TFtdcCSRCBankFlagType是一个银行标识类型

typedef char TThostFtdcCSRCBankFlagType[3];


///TFtdcCSRCBankAccountType是一个银行账户类型

typedef char TThostFtdcCSRCBankAccountType[23];


///TFtdcCSRCOpenNameType是一个开户人类型

typedef char TThostFtdcCSRCOpenNameType[401];


///TFtdcCSRCMemoType是一个说明类型

typedef char TThostFtdcCSRCMemoType[101];


///TFtdcCSRCTimeType是一个时间类型

typedef char TThostFtdcCSRCTimeType[11];


///TFtdcCSRCTradeIDType是一个成交流水号类型

typedef char TThostFtdcCSRCTradeIDType[21];


///TFtdcCSRCExchangeInstIDType是一个合约代码类型

typedef char TThostFtdcCSRCExchangeInstIDType[31];


///TFtdcCSRCMortgageNameType是一个质押品名称类型

typedef char TThostFtdcCSRCMortgageNameType[7];


///TFtdcCSRCReasonType是一个事由类型

typedef char TThostFtdcCSRCReasonType[3];


///TFtdcIsSettlementType是一个是否为非结算会员类型

typedef char TThostFtdcIsSettlementType[2];


///TFtdcCSRCMoneyType是一个资金类型

typedef double TThostFtdcCSRCMoneyType;


///TFtdcCSRCPriceType是一个价格类型

typedef double TThostFtdcCSRCPriceType;


///TFtdcCSRCOptionsTypeType是一个期权类型类型

typedef char TThostFtdcCSRCOptionsTypeType[2];


///TFtdcCSRCStrikePriceType是一个执行价类型

typedef double TThostFtdcCSRCStrikePriceType;


///TFtdcCSRCTargetProductIDType是一个标的品种类型

typedef char TThostFtdcCSRCTargetProductIDType[3];


///TFtdcCSRCTargetInstrIDType是一个标的合约类型

typedef char TThostFtdcCSRCTargetInstrIDType[31];


///TFtdcCommModelNameType是一个手续费率模板名称类型

typedef char TThostFtdcCommModelNameType[161];


///TFtdcCommModelMemoType是一个手续费率模板备注类型

typedef char TThostFtdcCommModelMemoType[1025];


///TFtdcExprSetModeType是一个日期表达式设置类型类型

///相对已有规则设置
#define THOST_FTDC_ESM_Relative '1'
///典型设置
#define THOST_FTDC_ESM_Typical '2'

typedef char TThostFtdcExprSetModeType;


///TFtdcRateInvestorRangeType是一个投资者范围类型

///公司标准
#define THOST_FTDC_RIR_All '1'
///模板
#define THOST_FTDC_RIR_Model '2'
///单一投资者
#define THOST_FTDC_RIR_Single '3'

typedef char TThostFtdcRateInvestorRangeType;


///TFtdcAgentBrokerIDType是一个代理经纪公司代码类型

typedef char TThostFtdcAgentBrokerIDType[13];


///TFtdcDRIdentityIDType是一个交易中心代码类型

typedef int TThostFtdcDRIdentityIDType;


///TFtdcDRIdentityNameType是一个交易中心名称类型

typedef char TThostFtdcDRIdentityNameType[65];


///TFtdcDBLinkIDType是一个DBLink标识号类型

typedef char TThostFtdcDBLinkIDType[31];


///TFtdcSyncDataStatusType是一个主次用系统数据同步状态类型

///未同步
#define THOST_FTDC_SDS_Initialize '0'
///同步中
#define THOST_FTDC_SDS_Settlementing '1'
///已同步
#define THOST_FTDC_SDS_Settlemented '2'

typedef char TThostFtdcSyncDataStatusType;


///TFtdcTradeSourceType是一个成交来源类型

///来自交易所普通回报
#define THOST_FTDC_TSRC_NORMAL '0'
///来自查询
#define THOST_FTDC_TSRC_QUERY '1'

typedef char TThostFtdcTradeSourceType;


///TFtdcFlexStatModeType是一个产品合约统计方式类型

///产品统计
#define THOST_FTDC_FSM_Product '1'
///交易所统计
#define THOST_FTDC_FSM_Exchange '2'
///统计所有
#define THOST_FTDC_FSM_All '3'

typedef char TThostFtdcFlexStatModeType;


///TFtdcByInvestorRangeType是一个投资者范围统计方式类型

///属性统计
#define THOST_FTDC_BIR_Property '1'
///统计所有
#define THOST_FTDC_BIR_All '2'

typedef char TThostFtdcByInvestorRangeType;


///TFtdcSRiskRateType是一个风险度类型

typedef char TThostFtdcSRiskRateType[21];


///TFtdcSequenceNo12Type是一个序号类型

typedef int TThostFtdcSequenceNo12Type;


///TFtdcPropertyInvestorRangeType是一个投资者范围类型

///所有
#define THOST_FTDC_PIR_All '1'
///投资者属性
#define THOST_FTDC_PIR_Property '2'
///单一投资者
#define THOST_FTDC_PIR_Single '3'

typedef char TThostFtdcPropertyInvestorRangeType;


///TFtdcFileStatusType是一个文件状态类型

///未生成
#define THOST_FTDC_FIS_NoCreate '0'
///已生成
#define THOST_FTDC_FIS_Created '1'
///生成失败
#define THOST_FTDC_FIS_Failed '2'

typedef char TThostFtdcFileStatusType;


///TFtdcFileGenStyleType是一个文件生成方式类型

///下发
#define THOST_FTDC_FGS_FileTransmit '0'
///生成
#define THOST_FTDC_FGS_FileGen '1'

typedef char TThostFtdcFileGenStyleType;


///TFtdcSysOperModeType是一个系统日志操作方法类型

///增加
#define THOST_FTDC_SoM_Add '1'
///修改
#define THOST_FTDC_SoM_Update '2'
///删除
#define THOST_FTDC_SoM_Delete '3'
///复制
#define THOST_FTDC_SoM_Copy '4'
///激活
#define THOST_FTDC_SoM_AcTive '5'
///注销
#define THOST_FTDC_SoM_CanCel '6'
///重置
#define THOST_FTDC_SoM_ReSet '7'

typedef char TThostFtdcSysOperModeType;


///TFtdcSysOperTypeType是一个系统日志操作类型类型

///修改操作员密码
#define THOST_FTDC_SoT_UpdatePassword '0'
///操作员组织架构关系
#define THOST_FTDC_SoT_UserDepartment '1'
///角色管理
#define THOST_FTDC_SoT_RoleManager '2'
///角色功能设置
#define THOST_FTDC_SoT_RoleFunction '3'
///基础参数设置
#define THOST_FTDC_SoT_BaseParam '4'
///设置操作员
#define THOST_FTDC_SoT_SetUserID '5'
///用户角色设置
#define THOST_FTDC_SoT_SetUserRole '6'
///用户IP限制
#define THOST_FTDC_SoT_UserIpRestriction '7'
///组织架构管理
#define THOST_FTDC_SoT_DepartmentManager '8'
///组织架构向查询分类复制
#define THOST_FTDC_SoT_DepartmentCopy '9'
///交易编码管理
#define THOST_FTDC_SoT_Tradingcode 'A'
///投资者状态维护
#define THOST_FTDC_SoT_InvestorStatus 'B'
///投资者权限管理
#define THOST_FTDC_SoT_InvestorAuthority 'C'
///属性设置
#define THOST_FTDC_SoT_PropertySet 'D'
///重置投资者密码
#define THOST_FTDC_SoT_ReSetInvestorPasswd 'E'
///投资者个性信息维护
#define THOST_FTDC_SoT_InvestorPersonalityInfo 'F'

typedef char TThostFtdcSysOperTypeType;


///TFtdcCSRCDataQueyTypeType是一个上报数据查询类型类型

///查询当前交易日报送的数据
#define THOST_FTDC_CSRCQ_Current '0'
///查询历史报送的代理经纪公司的数据
#define THOST_FTDC_CSRCQ_History '1'

typedef char TThostFtdcCSRCDataQueyTypeType;


///TFtdcFreezeStatusType是一个休眠状态类型

///活跃
#define THOST_FTDC_FRS_Normal '1'
///休眠
#define THOST_FTDC_FRS_Freeze '0'

typedef char TThostFtdcFreezeStatusType;


///TFtdcStandardStatusType是一个规范状态类型

///已规范
#define THOST_FTDC_STST_Standard '0'
///未规范
#define THOST_FTDC_STST_NonStandard '1'

typedef char TThostFtdcStandardStatusType;


///TFtdcCSRCFreezeStatusType是一个休眠状态类型

typedef char TThostFtdcCSRCFreezeStatusType[2];


///TFtdcRightParamTypeType是一个配置类型类型

///休眠户
#define THOST_FTDC_RPT_Freeze '1'
///激活休眠户
#define THOST_FTDC_RPT_FreezeActive '2'
///开仓权限限制
#define THOST_FTDC_RPT_OpenLimit '3'
///解除开仓权限限制
#define THOST_FTDC_RPT_RelieveOpenLimit '4'

typedef char TThostFtdcRightParamTypeType;


///TFtdcRightTemplateIDType是一个模板代码类型

typedef char TThostFtdcRightTemplateIDType[9];


///TFtdcRightTemplateNameType是一个模板名称类型

typedef char TThostFtdcRightTemplateNameType[61];


///TFtdcDataStatusType是一个反洗钱审核表数据状态类型

///正常
#define THOST_FTDC_AMLDS_Normal '0'
///已删除
#define THOST_FTDC_AMLDS_Deleted '1'

typedef char TThostFtdcDataStatusType;


///TFtdcAMLCheckStatusType是一个审核状态类型

///未复核
#define THOST_FTDC_AMLCHS_Init '0'
///复核中
#define THOST_FTDC_AMLCHS_Checking '1'
///已复核
#define THOST_FTDC_AMLCHS_Checked '2'
///拒绝上报
#define THOST_FTDC_AMLCHS_RefuseReport '3'

typedef char TThostFtdcAMLCheckStatusType;


///TFtdcAmlDateTypeType是一个日期类型类型

///检查日期
#define THOST_FTDC_AMLDT_DrawDay '0'
///发生日期
#define THOST_FTDC_AMLDT_TouchDay '1'

typedef char TThostFtdcAmlDateTypeType;


///TFtdcAmlCheckLevelType是一个审核级别类型

///零级审核
#define THOST_FTDC_AMLCL_CheckLevel0 '0'
///一级审核
#define THOST_FTDC_AMLCL_CheckLevel1 '1'
///二级审核
#define THOST_FTDC_AMLCL_CheckLevel2 '2'
///三级审核
#define THOST_FTDC_AMLCL_CheckLevel3 '3'

typedef char TThostFtdcAmlCheckLevelType;


///TFtdcAmlCheckFlowType是一个反洗钱数据抽取审核流程类型

typedef char TThostFtdcAmlCheckFlowType[2];


///TFtdcDataTypeType是一个数据类型类型

typedef char TThostFtdcDataTypeType[129];


///TFtdcExportFileTypeType是一个导出文件类型类型

///CSV
#define THOST_FTDC_EFT_CSV '0'
///Excel
#define THOST_FTDC_EFT_EXCEL '1'
///DBF
#define THOST_FTDC_EFT_DBF '2'

typedef char TThostFtdcExportFileTypeType;


///TFtdcSettleManagerTypeType是一个结算配置类型类型

///结算前准备
#define THOST_FTDC_SMT_Before '1'
///结算
#define THOST_FTDC_SMT_Settlement '2'
///结算后核对
#define THOST_FTDC_SMT_After '3'
///结算后处理
#define THOST_FTDC_SMT_Settlemented '4'

typedef char TThostFtdcSettleManagerTypeType;


///TFtdcSettleManagerIDType是一个结算配置代码类型

typedef char TThostFtdcSettleManagerIDType[33];


///TFtdcSettleManagerNameType是一个结算配置名称类型

typedef char TThostFtdcSettleManagerNameType[129];


///TFtdcSettleManagerLevelType是一个结算配置等级类型

///必要
#define THOST_FTDC_SML_Must '1'
///警告
#define THOST_FTDC_SML_Alarm '2'
///提示
#define THOST_FTDC_SML_Prompt '3'
///不检查
#define THOST_FTDC_SML_Ignore '4'

typedef char TThostFtdcSettleManagerLevelType;


///TFtdcSettleManagerGroupType是一个模块分组类型

///交易所核对
#define THOST_FTDC_SMG_Exhcange '1'
///内部核对
#define THOST_FTDC_SMG_ASP '2'
///上报数据核对
#define THOST_FTDC_SMG_CSRC '3'

typedef char TThostFtdcSettleManagerGroupType;


///TFtdcCheckResultMemoType是一个核对结果说明类型

typedef char TThostFtdcCheckResultMemoType[1025];


///TFtdcFunctionUrlType是一个功能链接类型

typedef char TThostFtdcFunctionUrlType[1025];


///TFtdcAuthInfoType是一个客户端认证信息类型

typedef char TThostFtdcAuthInfoType[129];


///TFtdcAuthCodeType是一个客户端认证码类型

typedef char TThostFtdcAuthCodeType[17];


///TFtdcLimitUseTypeType是一个保值额度使用类型类型

///可重复使用
#define THOST_FTDC_LUT_Repeatable '1'
///不可重复使用
#define THOST_FTDC_LUT_Unrepeatable '2'

typedef char TThostFtdcLimitUseTypeType;


///TFtdcDataResourceType是一个数据来源类型

///本系统
#define THOST_FTDC_DAR_Settle '1'
///交易所
#define THOST_FTDC_DAR_Exchange '2'
///报送数据
#define THOST_FTDC_DAR_CSRC '3'

typedef char TThostFtdcDataResourceType;


///TFtdcMarginTypeType是一个保证金类型类型

///交易所保证金率
#define THOST_FTDC_MGT_ExchMarginRate '0'
///投资者保证金率
#define THOST_FTDC_MGT_InstrMarginRate '1'
///投资者交易保证金率
#define THOST_FTDC_MGT_InstrMarginRateTrade '2'

typedef char TThostFtdcMarginTypeType;


///TFtdcActiveTypeType是一个生效类型类型

///仅当日生效
#define THOST_FTDC_ACT_Intraday '1'
///长期生效
#define THOST_FTDC_ACT_Long '2'

typedef char TThostFtdcActiveTypeType;


///TFtdcMarginRateTypeType是一个冲突保证金率类型类型

///交易所保证金率
#define THOST_FTDC_MRT_Exchange '1'
///投资者保证金率
#define THOST_FTDC_MRT_Investor '2'
///投资者交易保证金率
#define THOST_FTDC_MRT_InvestorTrade '3'

typedef char TThostFtdcMarginRateTypeType;


///TFtdcBackUpStatusType是一个备份数据状态类型

///未生成备份数据
#define THOST_FTDC_BUS_UnBak '0'
///备份数据生成中
#define THOST_FTDC_BUS_BakUp '1'
///已生成备份数据
#define THOST_FTDC_BUS_BakUped '2'
///备份数据失败
#define THOST_FTDC_BUS_BakFail '3'

typedef char TThostFtdcBackUpStatusType;


///TFtdcInitSettlementType是一个结算初始化状态类型

///结算初始化未开始
#define THOST_FTDC_SIS_UnInitialize '0'
///结算初始化中
#define THOST_FTDC_SIS_Initialize '1'
///结算初始化完成
#define THOST_FTDC_SIS_Initialized '2'

typedef char TThostFtdcInitSettlementType;


///TFtdcReportStatusType是一个报表数据生成状态类型

///未生成报表数据
#define THOST_FTDC_SRS_NoCreate '0'
///报表数据生成中
#define THOST_FTDC_SRS_Create '1'
///已生成报表数据
#define THOST_FTDC_SRS_Created '2'
///生成报表数据失败
#define THOST_FTDC_SRS_CreateFail '3'

typedef char TThostFtdcReportStatusType;


///TFtdcSaveStatusType是一个数据归档状态类型

///归档未完成
#define THOST_FTDC_SSS_UnSaveData '0'
///归档完成
#define THOST_FTDC_SSS_SaveDatad '1'

typedef char TThostFtdcSaveStatusType;


///TFtdcSettArchiveStatusType是一个结算确认数据归档状态类型

///未归档数据
#define THOST_FTDC_SAS_UnArchived '0'
///数据归档中
#define THOST_FTDC_SAS_Archiving '1'
///已归档数据
#define THOST_FTDC_SAS_Archived '2'
///归档数据失败
#define THOST_FTDC_SAS_ArchiveFail '3'

typedef char TThostFtdcSettArchiveStatusType;


///TFtdcCTPTypeType是一个CTP交易系统类型类型

///未知类型
#define THOST_FTDC_CTPT_Unkown '0'
///主中心
#define THOST_FTDC_CTPT_MainCenter '1'
///备中心
#define THOST_FTDC_CTPT_BackUp '2'

typedef char TThostFtdcCTPTypeType;


///TFtdcToolIDType是一个工具代码类型

typedef char TThostFtdcToolIDType[9];


///TFtdcToolNameType是一个工具名称类型

typedef char TThostFtdcToolNameType[81];


///TFtdcCloseDealTypeType是一个平仓处理类型类型

///正常
#define THOST_FTDC_CDT_Normal '0'
///投机平仓优先
#define THOST_FTDC_CDT_SpecFirst '1'

typedef char TThostFtdcCloseDealTypeType;


///TFtdcMortgageFundUseRangeType是一个货币质押资金可用范围类型

///不能使用
#define THOST_FTDC_MFUR_None '0'
///用于保证金
#define THOST_FTDC_MFUR_Margin '1'
///用于手续费、盈亏、保证金
#define THOST_FTDC_MFUR_All '2'

typedef char TThostFtdcMortgageFundUseRangeType;


///TFtdcCurrencyUnitType是一个币种单位数量类型

typedef double TThostFtdcCurrencyUnitType;


///TFtdcExchangeRateType是一个汇率类型

typedef double TThostFtdcExchangeRateType;


///TFtdcSpecProductTypeType是一个特殊产品类型类型

///郑商所套保产品
#define THOST_FTDC_SPT_CzceHedge '1'
///货币质押产品
#define THOST_FTDC_SPT_IneForeignCurrency '2'
///大连短线开平仓产品
#define THOST_FTDC_SPT_DceOpenClose '3'

typedef char TThostFtdcSpecProductTypeType;


///TFtdcFundMortgageTypeType是一个货币质押类型类型

///质押
#define THOST_FTDC_FMT_Mortgage '1'
///解质
#define THOST_FTDC_FMT_Redemption '2'

typedef char TThostFtdcFundMortgageTypeType;


///TFtdcAccountSettlementParamIDType是一个投资者账户结算参数代码类型

///基础保证金
#define THOST_FTDC_ASPI_BaseMargin '1'
///最低权益标准
#define THOST_FTDC_ASPI_LowestInterest '2'

typedef char TThostFtdcAccountSettlementParamIDType;


///TFtdcCurrencyNameType是一个币种名称类型

typedef char TThostFtdcCurrencyNameType[31];


///TFtdcCurrencySignType是一个币种符号类型

typedef char TThostFtdcCurrencySignType[4];


///TFtdcFundMortDirectionType是一个货币质押方向类型

///货币质入
#define THOST_FTDC_FMD_In '1'
///货币质出
#define THOST_FTDC_FMD_Out '2'

typedef char TThostFtdcFundMortDirectionType;


///TFtdcBusinessClassType是一个换汇类别类型

///盈利
#define THOST_FTDC_BT_Profit '0'
///亏损
#define THOST_FTDC_BT_Loss '1'
///其他
#define THOST_FTDC_BT_Other 'Z'

typedef char TThostFtdcBusinessClassType;


///TFtdcSwapSourceTypeType是一个换汇数据来源类型

///手工
#define THOST_FTDC_SST_Manual '0'
///自动生成
#define THOST_FTDC_SST_Automatic '1'

typedef char TThostFtdcSwapSourceTypeType;


///TFtdcCurrExDirectionType是一个换汇类型类型

///结汇
#define THOST_FTDC_CED_Settlement '0'
///售汇
#define THOST_FTDC_CED_Sale '1'

typedef char TThostFtdcCurrExDirectionType;


///TFtdcCurrencySwapStatusType是一个申请状态类型

///已录入
#define THOST_FTDC_CSS_Entry '1'
///已审核
#define THOST_FTDC_CSS_Approve '2'
///已拒绝
#define THOST_FTDC_CSS_Refuse '3'
///已撤销
#define THOST_FTDC_CSS_Revoke '4'
///已发送
#define THOST_FTDC_CSS_Send '5'
///换汇成功
#define THOST_FTDC_CSS_Success '6'
///换汇失败
#define THOST_FTDC_CSS_Failure '7'

typedef char TThostFtdcCurrencySwapStatusType;


///TFtdcCurrExchCertNoType是一个凭证号类型

typedef char TThostFtdcCurrExchCertNoType[13];


///TFtdcBatchSerialNoType是一个批次号类型

typedef char TThostFtdcBatchSerialNoType[21];


///TFtdcReqFlagType是一个换汇发送标志类型

///未发送
#define THOST_FTDC_REQF_NoSend '0'
///发送成功
#define THOST_FTDC_REQF_SendSuccess '1'
///发送失败
#define THOST_FTDC_REQF_SendFailed '2'
///等待重发
#define THOST_FTDC_REQF_WaitReSend '3'

typedef char TThostFtdcReqFlagType;


///TFtdcResFlagType是一个换汇返回成功标志类型

///成功
#define THOST_FTDC_RESF_Success '0'
///账户余额不足
#define THOST_FTDC_RESF_InsuffiCient '1'
///交易结果未知
#define THOST_FTDC_RESF_UnKnown '8'

typedef char TThostFtdcResFlagType;


///TFtdcPageControlType是一个换汇页面控制类型

typedef char TThostFtdcPageControlType[2];


///TFtdcRecordCountType是一个记录数类型

typedef int TThostFtdcRecordCountType;


///TFtdcCurrencySwapMemoType是一个换汇需确认信息类型

typedef char TThostFtdcCurrencySwapMemoType[101];


///TFtdcExStatusType是一个修改状态类型

///修改前
#define THOST_FTDC_EXS_Before '0'
///修改后
#define THOST_FTDC_EXS_After '1'

typedef char TThostFtdcExStatusType;


///TFtdcClientRegionType是一个开户客户地域类型

///国内客户
#define THOST_FTDC_CR_Domestic '1'
///港澳台客户
#define THOST_FTDC_CR_GMT '2'
///国外客户
#define THOST_FTDC_CR_Foreign '3'

typedef char TThostFtdcClientRegionType;


///TFtdcWorkPlaceType是一个工作单位类型

typedef char TThostFtdcWorkPlaceType[101];


///TFtdcBusinessPeriodType是一个经营期限类型

typedef char TThostFtdcBusinessPeriodType[21];


///TFtdcWebSiteType是一个网址类型

typedef char TThostFtdcWebSiteType[101];


///TFtdcUOAIdCardTypeType是一个统一开户证件类型类型

typedef char TThostFtdcUOAIdCardTypeType[3];


///TFtdcClientModeType是一个开户模式类型

typedef char TThostFtdcClientModeType[3];


///TFtdcInvestorFullNameType是一个投资者全称类型

typedef char TThostFtdcInvestorFullNameType[101];


///TFtdcUOABrokerIDType是一个境外中介机构ID类型

typedef char TThostFtdcUOABrokerIDType[11];


///TFtdcUOAZipCodeType是一个邮政编码类型

typedef char TThostFtdcUOAZipCodeType[11];


///TFtdcUOAEMailType是一个电子邮箱类型

typedef char TThostFtdcUOAEMailType[101];


///TFtdcOldCityType是一个城市类型

typedef char TThostFtdcOldCityType[41];


///TFtdcCorporateIdentifiedCardNoType是一个法人代表证件号码类型

typedef char TThostFtdcCorporateIdentifiedCardNoType[101];


///TFtdcHasBoardType是一个是否有董事会类型

///没有
#define THOST_FTDC_HB_No '0'
///有
#define THOST_FTDC_HB_Yes '1'

typedef char TThostFtdcHasBoardType;


///TFtdcStartModeType是一个启动模式类型

///正常
#define THOST_FTDC_SM_Normal '1'
///应急
#define THOST_FTDC_SM_Emerge '2'
///恢复
#define THOST_FTDC_SM_Restore '3'

typedef char TThostFtdcStartModeType;


///TFtdcTemplateTypeType是一个模型类型类型

///全量
#define THOST_FTDC_TPT_Full '1'
///增量
#define THOST_FTDC_TPT_Increment '2'
///备份
#define THOST_FTDC_TPT_BackUp '3'

typedef char TThostFtdcTemplateTypeType;


///TFtdcLoginModeType是一个登录模式类型

///交易
#define THOST_FTDC_LM_Trade '0'
///转账
#define THOST_FTDC_LM_Transfer '1'

typedef char TThostFtdcLoginModeType;


///TFtdcPromptTypeType是一个日历提示类型类型

///合约上下市
#define THOST_FTDC_CPT_Instrument '1'
///保证金分段生效
#define THOST_FTDC_CPT_Margin '2'

typedef char TThostFtdcPromptTypeType;


///TFtdcLedgerManageIDType是一个分户管理资产编码类型

typedef char TThostFtdcLedgerManageIDType[51];


///TFtdcInvestVarietyType是一个投资品种类型

typedef char TThostFtdcInvestVarietyType[101];


///TFtdcBankAccountTypeType是一个账户类别类型

typedef char TThostFtdcBankAccountTypeType[2];


///TFtdcLedgerManageBankType是一个开户银行类型

typedef char TThostFtdcLedgerManageBankType[101];


///TFtdcCffexDepartmentNameType是一个开户营业部类型

typedef char TThostFtdcCffexDepartmentNameType[101];


///TFtdcCffexDepartmentCodeType是一个营业部代码类型

typedef char TThostFtdcCffexDepartmentCodeType[9];


///TFtdcHasTrusteeType是一个是否有托管人类型

///有
#define THOST_FTDC_HT_Yes '1'
///没有
#define THOST_FTDC_HT_No '0'

typedef char TThostFtdcHasTrusteeType;


///TFtdcCSRCMemo1Type是一个说明类型

typedef char TThostFtdcCSRCMemo1Type[41];


///TFtdcAssetmgrCFullNameType是一个代理资产管理业务的期货公司全称类型

typedef char TThostFtdcAssetmgrCFullNameType[101];


///TFtdcAssetmgrApprovalNOType是一个资产管理业务批文号类型

typedef char TThostFtdcAssetmgrApprovalNOType[51];


///TFtdcAssetmgrMgrNameType是一个资产管理业务负责人姓名类型

typedef char TThostFtdcAssetmgrMgrNameType[401];


///TFtdcAmTypeType是一个机构类型类型

///银行
#define THOST_FTDC_AMT_Bank '1'
///证券公司
#define THOST_FTDC_AMT_Securities '2'
///基金公司
#define THOST_FTDC_AMT_Fund '3'
///保险公司
#define THOST_FTDC_AMT_Insurance '4'
///信托公司
#define THOST_FTDC_AMT_Trust '5'
///其他
#define THOST_FTDC_AMT_Other '9'

typedef char TThostFtdcAmTypeType;


///TFtdcCSRCAmTypeType是一个机构类型类型

typedef char TThostFtdcCSRCAmTypeType[5];


///TFtdcCSRCFundIOTypeType是一个出入金类型类型

///出入金
#define THOST_FTDC_CFIOT_FundIO '0'
///银期换汇
#define THOST_FTDC_CFIOT_SwapCurrency '1'

typedef char TThostFtdcCSRCFundIOTypeType;


///TFtdcCusAccountTypeType是一个结算账户类型类型

///期货结算账户
#define THOST_FTDC_CAT_Futures '1'
///纯期货资管业务下的资管结算账户
#define THOST_FTDC_CAT_AssetmgrFuture '2'
///综合类资管业务下的期货资管托管账户
#define THOST_FTDC_CAT_AssetmgrTrustee '3'
///综合类资管业务下的资金中转账户
#define THOST_FTDC_CAT_AssetmgrTransfer '4'

typedef char TThostFtdcCusAccountTypeType;


///TFtdcCSRCNationalType是一个国籍类型

typedef char TThostFtdcCSRCNationalType[4];


///TFtdcCSRCSecAgentIDType是一个二级代理ID类型

typedef char TThostFtdcCSRCSecAgentIDType[11];


///TFtdcLanguageTypeType是一个通知语言类型类型

///中文
#define THOST_FTDC_LT_Chinese '1'
///英文
#define THOST_FTDC_LT_English '2'

typedef char TThostFtdcLanguageTypeType;


///TFtdcAmAccountType是一个投资账户类型

typedef char TThostFtdcAmAccountType[23];


///TFtdcAssetmgrClientTypeType是一个资产管理客户类型类型

///个人资管客户
#define THOST_FTDC_AMCT_Person '1'
///单位资管客户
#define THOST_FTDC_AMCT_Organ '2'
///特殊单位资管客户
#define THOST_FTDC_AMCT_SpecialOrgan '4'

typedef char TThostFtdcAssetmgrClientTypeType;


///TFtdcAssetmgrTypeType是一个投资类型类型

///期货类
#define THOST_FTDC_ASST_Futures '3'
///综合类
#define THOST_FTDC_ASST_SpecialOrgan '4'

typedef char TThostFtdcAssetmgrTypeType;


///TFtdcUOMType是一个计量单位类型

typedef char TThostFtdcUOMType[11];


///TFtdcSHFEInstLifePhaseType是一个上期所合约生命周期状态类型

typedef char TThostFtdcSHFEInstLifePhaseType[3];


///TFtdcSHFEProductClassType是一个产品类型类型

typedef char TThostFtdcSHFEProductClassType[11];


///TFtdcPriceDecimalType是一个价格小数位类型

typedef char TThostFtdcPriceDecimalType[2];


///TFtdcInTheMoneyFlagType是一个平值期权标志类型

typedef char TThostFtdcInTheMoneyFlagType[2];


///TFtdcCheckInstrTypeType是一个合约比较类型类型

///合约交易所不存在
#define THOST_FTDC_CIT_HasExch '0'
///合约本系统不存在
#define THOST_FTDC_CIT_HasATP '1'
///合约比较不一致
#define THOST_FTDC_CIT_HasDiff '2'

typedef char TThostFtdcCheckInstrTypeType;


///TFtdcDeliveryTypeType是一个交割类型类型

///手工交割
#define THOST_FTDC_DT_HandDeliv '1'
///到期交割
#define THOST_FTDC_DT_PersonDeliv '2'

typedef char TThostFtdcDeliveryTypeType;


///TFtdcBigMoneyType是一个资金类型

typedef double TThostFtdcBigMoneyType;


///TFtdcMaxMarginSideAlgorithmType是一个大额单边保证金算法类型

///不使用大额单边保证金算法
#define THOST_FTDC_MMSA_NO '0'
///使用大额单边保证金算法
#define THOST_FTDC_MMSA_YES '1'

typedef char TThostFtdcMaxMarginSideAlgorithmType;


///TFtdcDAClientTypeType是一个资产管理客户类型类型

///自然人
#define THOST_FTDC_CACT_Person '0'
///法人
#define THOST_FTDC_CACT_Company '1'
///其他
#define THOST_FTDC_CACT_Other '2'

typedef char TThostFtdcDAClientTypeType;


///TFtdcCombinInstrIDType是一个套利合约代码类型

typedef char TThostFtdcCombinInstrIDType[61];


///TFtdcCombinSettlePriceType是一个各腿结算价类型

typedef char TThostFtdcCombinSettlePriceType[61];


///TFtdcDCEPriorityType是一个优先级类型

typedef int TThostFtdcDCEPriorityType;


///TFtdcTradeGroupIDType是一个成交组号类型

typedef int TThostFtdcTradeGroupIDType;


///TFtdcIsCheckPrepaType是一个是否校验开户可用资金类型

typedef int TThostFtdcIsCheckPrepaType;


///TFtdcUOAAssetmgrTypeType是一个投资类型类型

///期货类
#define THOST_FTDC_UOAAT_Futures '1'
///综合类
#define THOST_FTDC_UOAAT_SpecialOrgan '2'

typedef char TThostFtdcUOAAssetmgrTypeType;


///TFtdcDirectionEnType是一个买卖方向类型

///Buy
#define THOST_FTDC_DEN_Buy '0'
///Sell
#define THOST_FTDC_DEN_Sell '1'

typedef char TThostFtdcDirectionEnType;


///TFtdcOffsetFlagEnType是一个开平标志类型

///Position Opening
#define THOST_FTDC_OFEN_Open '0'
///Position Close
#define THOST_FTDC_OFEN_Close '1'
///Forced Liquidation
#define THOST_FTDC_OFEN_ForceClose '2'
///Close Today
#define THOST_FTDC_OFEN_CloseToday '3'
///Close Prev.
#define THOST_FTDC_OFEN_CloseYesterday '4'
///Forced Reduction
#define THOST_FTDC_OFEN_ForceOff '5'
///Local Forced Liquidation
#define THOST_FTDC_OFEN_LocalForceClose '6'

typedef char TThostFtdcOffsetFlagEnType;


///TFtdcHedgeFlagEnType是一个投机套保标志类型

///Speculation
#define THOST_FTDC_HFEN_Speculation '1'
///Arbitrage
#define THOST_FTDC_HFEN_Arbitrage '2'
///Hedge
#define THOST_FTDC_HFEN_Hedge '3'

typedef char TThostFtdcHedgeFlagEnType;


///TFtdcFundIOTypeEnType是一个出入金类型类型

///Deposit/Withdrawal
#define THOST_FTDC_FIOTEN_FundIO '1'
///Bank-Futures Transfer
#define THOST_FTDC_FIOTEN_Transfer '2'
///Bank-Futures FX Exchange
#define THOST_FTDC_FIOTEN_SwapCurrency '3'

typedef char TThostFtdcFundIOTypeEnType;


///TFtdcFundTypeEnType是一个资金类型类型

///Bank Deposit
#define THOST_FTDC_FTEN_Deposite '1'
///Payment/Fee
#define THOST_FTDC_FTEN_ItemFund '2'
///Brokerage Adj
#define THOST_FTDC_FTEN_Company '3'
///Internal Transfer
#define THOST_FTDC_FTEN_InnerTransfer '4'

typedef char TThostFtdcFundTypeEnType;


///TFtdcFundDirectionEnType是一个出入金方向类型

///Deposit
#define THOST_FTDC_FDEN_In '1'
///Withdrawal
#define THOST_FTDC_FDEN_Out '2'

typedef char TThostFtdcFundDirectionEnType;


///TFtdcFundMortDirectionEnType是一个货币质押方向类型

///Pledge
#define THOST_FTDC_FMDEN_In '1'
///Redemption
#define THOST_FTDC_FMDEN_Out '2'

typedef char TThostFtdcFundMortDirectionEnType;


///TFtdcSwapBusinessTypeType是一个换汇业务种类类型

typedef char TThostFtdcSwapBusinessTypeType[3];


///TFtdcOptionsTypeType是一个期权类型类型

///看涨
#define THOST_FTDC_CP_CallOptions '1'
///看跌
#define THOST_FTDC_CP_PutOptions '2'

typedef char TThostFtdcOptionsTypeType;


///TFtdcStrikeModeType是一个执行方式类型

///欧式
#define THOST_FTDC_STM_Continental '0'
///美式
#define THOST_FTDC_STM_American '1'
///百慕大
#define THOST_FTDC_STM_Bermuda '2'

typedef char TThostFtdcStrikeModeType;


///TFtdcStrikeTypeType是一个执行类型类型

///自身对冲
#define THOST_FTDC_STT_Hedge '0'
///匹配执行
#define THOST_FTDC_STT_Match '1'

typedef char TThostFtdcStrikeTypeType;


///TFtdcApplyTypeType是一个中金所期权放弃执行申请类型类型

///不执行数量
#define THOST_FTDC_APPT_NotStrikeNum '4'

typedef char TThostFtdcApplyTypeType;


///TFtdcGiveUpDataSourceType是一个放弃执行申请数据来源类型

///系统生成
#define THOST_FTDC_GUDS_Gen '0'
///手工添加
#define THOST_FTDC_GUDS_Hand '1'

typedef char TThostFtdcGiveUpDataSourceType;


///TFtdcExecOrderSysIDType是一个执行宣告系统编号类型

typedef char TThostFtdcExecOrderSysIDType[21];


///TFtdcExecResultType是一个执行结果类型

///没有执行
#define THOST_FTDC_OER_NoExec 'n'
///已经取消
#define THOST_FTDC_OER_Canceled 'c'
///执行成功
#define THOST_FTDC_OER_OK '0'
///期权持仓不够
#define THOST_FTDC_OER_NoPosition '1'
///资金不够
#define THOST_FTDC_OER_NoDeposit '2'
///会员不存在
#define THOST_FTDC_OER_NoParticipant '3'
///客户不存在
#define THOST_FTDC_OER_NoClient '4'
///合约不存在
#define THOST_FTDC_OER_NoInstrument '6'
///没有执行权限
#define THOST_FTDC_OER_NoRight '7'
///不合理的数量
#define THOST_FTDC_OER_InvalidVolume '8'
///没有足够的历史成交
#define THOST_FTDC_OER_NoEnoughHistoryTrade '9'
///未知
#define THOST_FTDC_OER_Unknown 'a'

typedef char TThostFtdcExecResultType;


///TFtdcStrikeSequenceType是一个执行序号类型

typedef int TThostFtdcStrikeSequenceType;


///TFtdcStrikeTimeType是一个执行时间类型

typedef char TThostFtdcStrikeTimeType[13];


///TFtdcCombinationTypeType是一个组合类型类型

///期货组合
#define THOST_FTDC_COMBT_Future '0'
///垂直价差BUL
#define THOST_FTDC_COMBT_BUL '1'
///垂直价差BER
#define THOST_FTDC_COMBT_BER '2'
///跨式组合
#define THOST_FTDC_COMBT_STD '3'
///宽跨式组合
#define THOST_FTDC_COMBT_STG '4'
///备兑组合
#define THOST_FTDC_COMBT_PRT '5'
///时间价差组合
#define THOST_FTDC_COMBT_CLD '6'

typedef char TThostFtdcCombinationTypeType;


///TFtdcOptionRoyaltyPriceTypeType是一个期权权利金价格类型类型

///昨结算价
#define THOST_FTDC_ORPT_PreSettlementPrice '1'
///开仓价
#define THOST_FTDC_ORPT_OpenPrice '4'

typedef char TThostFtdcOptionRoyaltyPriceTypeType;


///TFtdcBalanceAlgorithmType是一个权益算法类型

///不计算期权市值盈亏
#define THOST_FTDC_BLAG_Default '1'
///计算期权市值亏损
#define THOST_FTDC_BLAG_IncludeOptValLost '2'

typedef char TThostFtdcBalanceAlgorithmType;


///TFtdcActionTypeType是一个执行类型类型

///执行
#define THOST_FTDC_ACTP_Exec '1'
///放弃
#define THOST_FTDC_ACTP_Abandon '2'

typedef char TThostFtdcActionTypeType;


///TFtdcForQuoteStatusType是一个询价状态类型

///已经提交
#define THOST_FTDC_FQST_Submitted 'a'
///已经接受
#define THOST_FTDC_FQST_Accepted 'b'
///已经被拒绝
#define THOST_FTDC_FQST_Rejected 'c'

typedef char TThostFtdcForQuoteStatusType;


///TFtdcValueMethodType是一个取值方式类型

///按绝对值
#define THOST_FTDC_VM_Absolute '0'
///按比率
#define THOST_FTDC_VM_Ratio '1'

typedef char TThostFtdcValueMethodType;


///TFtdcExecOrderPositionFlagType是一个期权行权后是否保留期货头寸的标记类型

///保留
#define THOST_FTDC_EOPF_Reserve '0'
///不保留
#define THOST_FTDC_EOPF_UnReserve '1'

typedef char TThostFtdcExecOrderPositionFlagType;


///TFtdcExecOrderCloseFlagType是一个期权行权后生成的头寸是否自动平仓类型

///自动平仓
#define THOST_FTDC_EOCF_AutoClose '0'
///免于自动平仓
#define THOST_FTDC_EOCF_NotToClose '1'

typedef char TThostFtdcExecOrderCloseFlagType;


///TFtdcProductTypeType是一个产品类型类型

///期货
#define THOST_FTDC_PTE_Futures '1'
///期权
#define THOST_FTDC_PTE_Options '2'

typedef char TThostFtdcProductTypeType;


///TFtdcCZCEUploadFileNameType是一个郑商所结算文件名类型

///^\d{8}_zz_\d{4}
#define THOST_FTDC_CUFN_CUFN_O 'O'
///^\d{8}成交表
#define THOST_FTDC_CUFN_CUFN_T 'T'
///^\d{8}单腿持仓表new
#define THOST_FTDC_CUFN_CUFN_P 'P'
///^\d{8}非平仓了结表
#define THOST_FTDC_CUFN_CUFN_N 'N'
///^\d{8}平仓表
#define THOST_FTDC_CUFN_CUFN_L 'L'
///^\d{8}资金表
#define THOST_FTDC_CUFN_CUFN_F 'F'
///^\d{8}组合持仓表
#define THOST_FTDC_CUFN_CUFN_C 'C'
///^\d{8}保证金参数表
#define THOST_FTDC_CUFN_CUFN_M 'M'

typedef char TThostFtdcCZCEUploadFileNameType;


///TFtdcDCEUploadFileNameType是一个大商所结算文件名类型

///^\d{8}_dl_\d{3}
#define THOST_FTDC_DUFN_DUFN_O 'O'
///^\d{8}_成交表
#define THOST_FTDC_DUFN_DUFN_T 'T'
///^\d{8}_持仓表
#define THOST_FTDC_DUFN_DUFN_P 'P'
///^\d{8}_资金结算表
#define THOST_FTDC_DUFN_DUFN_F 'F'
///^\d{8}_优惠组合持仓明细表
#define THOST_FTDC_DUFN_DUFN_C 'C'
///^\d{8}_持仓明细表
#define THOST_FTDC_DUFN_DUFN_D 'D'
///^\d{8}_保证金参数表
#define THOST_FTDC_DUFN_DUFN_M 'M'
///^\d{8}_期权执行表
#define THOST_FTDC_DUFN_DUFN_S 'S'

typedef char TThostFtdcDCEUploadFileNameType;


///TFtdcSHFEUploadFileNameType是一个上期所结算文件名类型

///^\d{4}_\d{8}_\d{8}_DailyFundChg
#define THOST_FTDC_SUFN_SUFN_O 'O'
///^\d{4}_\d{8}_\d{8}_Trade
#define THOST_FTDC_SUFN_SUFN_T 'T'
///^\d{4}_\d{8}_\d{8}_SettlementDetail
#define THOST_FTDC_SUFN_SUFN_P 'P'
///^\d{4}_\d{8}_\d{8}_Capital
#define THOST_FTDC_SUFN_SUFN_F 'F'

typedef char TThostFtdcSHFEUploadFileNameType;


///TFtdcCFFEXUploadFileNameType是一个中金所结算文件名类型

///^\d{4}_SG\d{1}_\d{8}_\d{1}_Trade
#define THOST_FTDC_CFUFN_SUFN_T 'T'
///^\d{4}_SG\d{1}_\d{8}_\d{1}_SettlementDetail
#define THOST_FTDC_CFUFN_SUFN_P 'P'
///^\d{4}_SG\d{1}_\d{8}_\d{1}_Capital
#define THOST_FTDC_CFUFN_SUFN_F 'F'
///^\d{4}_SG\d{1}_\d{8}_\d{1}_OptionExec
#define THOST_FTDC_CFUFN_SUFN_S 'S'

typedef char TThostFtdcCFFEXUploadFileNameType;


///TFtdcCombDirectionType是一个组合指令方向类型

///申请组合
#define THOST_FTDC_CMDR_Comb '0'
///申请拆分
#define THOST_FTDC_CMDR_UnComb '1'

typedef char TThostFtdcCombDirectionType;

#endif
