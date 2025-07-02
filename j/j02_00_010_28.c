MsgDisp("主人公","Call me back when you got my message.");
SEPlay("SYS_SE_RECORD_END");
SEWait();
Wait(17,0);
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","Alright, that should do......
Let's wait for the answer.");
MsgClose();
