double k = pow(m , 1.0/n);

  if (abs(k - round(k)) < 1e-9)return round(k);
  else return -1;