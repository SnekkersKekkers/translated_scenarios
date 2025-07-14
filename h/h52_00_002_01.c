BGOpen("ho210",0);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","(Ah, a call......
I wonder who it's from?)");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
VoicePlay("H520000201_32_000");
MsgDisp("VP Himuro","This is Himuro from
Habataki High School.");
MsgDisp("主人公","Huh, Himuro-sensei∋");
VoicePlay("H520000201_32_010");
MsgDisp("VP Himuro","Your name is on the list of students who
are required to take a makeup exam.");
MsgDisp("主人公","Ah, yes......
I'm sorry.");
VoicePlay("H520000201_32_020");
MsgDisp("VP Himuro","This is a problem that comes before your
enjoyment of music. Concentrate on your
studies from tomorrow on. I'll have you
leave the band. That is all.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(Ugh......
I should've studied properly.)");
MsgDisp("","(I was kicked off the brass band.)");
MsgClose();
