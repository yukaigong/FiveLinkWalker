% Create Data Bus
Data = Construct_Data;
cassieDataBusInfo = Simulink.Bus.createObject(Data);
cassieDataBus = eval(cassieDataBusInfo.busName);
