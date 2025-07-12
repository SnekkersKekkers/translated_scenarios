BGOpen("ho210",2);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","(Ah, a call...... I wonder who it's from?)");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
VoicePlay("H520000200_32_000");
MsgDisp("VP Himuro","This is Himuro from
Habataki High School.");
MsgDisp("主人公","Huh, Himuro-sensei∋");
VoicePlay("H520000200_32_010");
MsgDisp("VP Himuro","If even one person isn't willing to
participate, the harmony of the entire
brass band is disrupted.");
VoicePlay("H520000200_32_020");
MsgDisp("VP Himuro","Perhaps you had your own circumstances.
But these are the rules of our band.
Those who have unapproved absences
are to leave. That is all.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(Shoot∈
There was general practice with the
brass band today......)");
MsgDisp("","(I was kicked off the brass band.)");
MsgClose();
