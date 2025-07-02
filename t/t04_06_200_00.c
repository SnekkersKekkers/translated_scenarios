MsgType(0);
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("T040620000_06_000");
MsgDisp("Himuro","......That's right. Do you remember? That
time I taught those two how to surf at the
beach. And I stealthily sent you a
message——");
MsgClose();
StlOpen("ev_06_20");
StlEye(1,0);
StlMouth(1,0);
StlEye(2,0);
StlMouth(2,0);
StlEye(6,0);
StlMouth(6,0);
BGMPlay("BGM_PROLOGUE",0.01);
Wait(120);
ScrFadeIn(0);
Wait(60);
StlEye(2,0);
StlMouth(2,0);
VoicePlay("T040620000_02_000");
MsgDisp("Sassa","......Yes, this strengthens your core as
you ride on top of the waves. Sounds fun,
huh?");
StlEye(6,1);
StlMouth(6,1);
VoicePlay("T040620000_06_010");
MsgDisp("Himuro","As expected of Nozomu-senpai. It looks
like we can move on to practicing in the
ocean now.");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("T040620000_06_020");
MsgDisp("Himuro","In comparison......");
StlEye(1,0);
StlMouth(1,0);
VoicePlay("T040620000_01_000");
MsgDisp("Kazama","I'm clearly being outclassed in this
comparison.");
StlEye(6,0);
StlMouth(6,0);
StlEyeOpenLevel(6,5);
VoicePlay("T040620000_06_030");
MsgDisp("Himuro","Unfortunately, there are only two
students.");
StlEye(1,0);
StlMouth(1,0);
VoicePlay("T040620000_01_010");
MsgDisp("Kazama","I guess the other person is running late?");
StlEye(6,0);
StlMouth(6,0);
StlEyeOpenLevel(6,0);
VoicePlay("T040620000_06_040");
MsgDisp("Himuro","Scholarship students are a special case.");
MsgDisp("主人公","Hehe!");
MsgClose();
BGMStop(5);
ScrFadeOut(0,0,300);
StlClose();
VoicePlay("T040620000_06_050");
MsgDisp("Himuro","Those two couldn't wait to show off 
their best side to you,
......and of couse, me too.");
MsgClose();
ScrFadeOut(0,0,300);
Wait(300,0);
