% Create Data Bus
Data = Construct_Data;
cassieDataBusInfo = Simulink.Bus.createObject(Data);
cassieDataBus = eval(cassieDataBusInfo.busName);

EstStates = Construct_EstStates;
EstStatesBusInfo = Simulink.Bus.createObject(EstStates);
EstStatesBus = eval(EstStatesBusInfo.busName);