function [dM] = MatrixTimeDerivative(M,X,dX)
dim = size(M);
dM = SymExpression(zeros(dim));
for i = 1:dim(2)
    dM(:,i) = jacobian(M(:,i),X)*dX;
end
end

