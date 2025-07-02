MsgType(0);
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("T040220000_02_000");
MsgDisp("Sassa","Hey, do you remember that time Inori
taught everyone how to surf?");
MsgClose();
StlOpen("ev_02_21");
BGMPlay("BGM_PROLOGUE",0.01);
Wait(120);
ScrFadeIn(0);
Wait(60);
MsgDisp("主人公","Hehe.
Good job everyone.");
VoicePlay("T040220000_01_000");
MsgDisp("Kazama","You're laughing carefree aren't you.");
VoicePlay("T040220000_02_010");
MsgDisp("Sassa","It's pretty tough. I learned that surfing
can help strengthen your core.");
VoicePlay("T040220000_06_000");
MsgDisp("Himuro","As expected of Nozomu-senpai.
I think you'll be out in the water soon.");
MsgDisp("主人公","I want to see everyone surfing.");
VoicePlay("T040220000_02_020");
MsgDisp("Sassa","You're doing it with us too.");
VoicePlay("T040220000_06_010");
MsgDisp("Himuro","Yeah, that's right.");
VoicePlay("T040220000_01_010");
MsgDisp("Kazama","Inori...... So beach surfing is out of the
question for girls?");
MsgClose();
BGMStop(5);
ScrFadeOut(0,0,300);
StlClose();
VoicePlay("T040220000_02_030");
MsgDisp("Sassa","Next time, I'll invite Ryota and Inori
and we'll all go surfing together.
How about we try other sports together?");
MsgClose();
ScrFadeOut(0,0,300);
Wait(300,0);
