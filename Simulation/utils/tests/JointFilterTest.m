
%%
dq_test = reshape(test_dq.Data,7,[]);
dq_true = reshape(true_dq.Data,7,[]);
dq_error = dq_test - dq_true;
t = test_dq.Time;

%%
figure
plot(t,dq_test(1,:))
hold on
plot(t,dq_true(1,:))
hold off