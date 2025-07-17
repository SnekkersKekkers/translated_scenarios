BGOpen("ho210",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_663");
Wait(10,0);
SEWait();
SEPlay("SYS_SE_NOT_CONNECT");
SEWait();
SEStop("SYS_SE_NOT_CONNECT",0.01);
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(Looks like my call won't go
through...)");
MsgClose();
