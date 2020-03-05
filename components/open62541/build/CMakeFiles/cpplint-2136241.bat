@echo off
cd /D C:\Users\graf\esp_projects\ME_OPCUA_GW_1.09-dev\components\open62541\build || (set FAIL_LINE=2& goto :ABORT)
cpplint C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/ua_types.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/ua_types_encoding_binary.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/build/src_generated/open62541/types_generated.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/build/src_generated/open62541/transport_generated.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/build/src_generated/open62541/statuscodes.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/ua_util.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/ua_workqueue.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/ua_timer.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/ua_connection.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/ua_securechannel.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_session.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_nodes.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_server.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_server_ns0.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_server_config.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_server_binary.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_server_utils.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_server_discovery.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_server_async.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_securechannel_manager.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_session_manager.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/pubsub/ua_pubsub_networkmessage.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/pubsub/ua_pubsub_writer.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/pubsub/ua_pubsub_reader.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/pubsub/ua_pubsub_manager.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/pubsub/ua_pubsub_ns0.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_services_view.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_services_method.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_services_session.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_services_attribute.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_services_discovery.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_services_subscription.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_services_monitoreditem.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_services_securechannel.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_services_nodemanagement.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_services_discovery_multicast.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/client/ua_client.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/client/ua_client_connect.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/client/ua_client_connect_async.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/client/ua_client_discovery.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/client/ua_client_highlevel.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/client/ua_client_subscriptions.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/client/ua_client_worker.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/deps/libc_time.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/deps/pcg_basic.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/deps/base64.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/build/src_generated/open62541/namespace0_generated.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_discovery_manager.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_subscription.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_subscription_monitoreditem.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_subscription_datachange.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/deps/open62541_queue.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/deps/pcg_basic.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/deps/libc_time.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/deps/base64.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/ua_util_internal.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/ua_types_encoding_binary.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/build/src_generated/open62541/types_generated_encoding_binary.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/build/src_generated/open62541/transport_generated.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/build/src_generated/open62541/transport_generated_handling.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/build/src_generated/open62541/transport_generated_encoding_binary.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/ua_connection_internal.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/ua_securechannel.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/ua_workqueue.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_discovery_manager.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/ua_timer.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_session.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_subscription.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_session_manager.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_securechannel_manager.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/pubsub/ua_pubsub_networkmessage.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/pubsub/ua_pubsub.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/pubsub/ua_pubsub_manager.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/pubsub/ua_pubsub_ns0.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_server_internal.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_services.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/client/ua_client_internal.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/src/server/ua_server_async.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/build/src_generated/open62541/namespace0_generated.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/plugins/include/open62541/plugin/accesscontrol_default.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/plugins/include/open62541/plugin/pki_default.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/plugins/include/open62541/plugin/log_stdout.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/plugins/include/open62541/plugin/nodestore_default.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/plugins/include/open62541/server_config_default.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/plugins/include/open62541/client_config_default.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/plugins/include/open62541/plugin/securitypolicy_default.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/plugins/include/open62541/plugin/securitypolicy_mbedtls_common.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/plugins/ua_log_stdout.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/plugins/ua_accesscontrol_default.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/plugins/ua_pki_default.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/plugins/ua_nodestore_ziptree.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/plugins/ua_nodestore_hashmap.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/plugins/ua_config_default.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/plugins/securityPolicies/ua_securitypolicy_none.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/plugins/securityPolicies/securitypolicy_mbedtls_common.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/plugins/securityPolicies/ua_securitypolicy_basic128rsa15.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/plugins/securityPolicies/ua_securitypolicy_basic256.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/plugins/securityPolicies/ua_securitypolicy_basic256sha256.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/include/open62541/network_tcp.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/include/open62541/architecture_functions.h C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/arch/freertosLWIP/ua_clock.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/arch/freertosLWIP/ua_architecture_functions.c C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/arch/network_tcp.c || (set FAIL_LINE=3& goto :ABORT)
goto :EOF

:ABORT
set ERROR_CODE=%ERRORLEVEL%
echo Batch file failed at line %FAIL_LINE% with errorcode %ERRORLEVEL%
exit /b %ERROR_CODE%