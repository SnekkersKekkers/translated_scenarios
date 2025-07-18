MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("sc771",2);
ChLayout(1);
MsgClose();
ChOpen(2,34,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(2);
VoicePlay("R080200000_02_000");
MsgDisp("Sassa","｛主人公｝.
Hey.");
MsgDisp("主人公","｛颯砂＊＊｝, what's wrong?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,7);
VoicePlay("R080200000_02_010");
MsgDisp("Sassa","Dressing like this makes my shoulders so
stiff.");
MsgDisp("主人公","Hehe, yeah.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("R080200000_02_020");
MsgDisp("Sassa","So, wanna go outside for a little
exercise?");
MsgDisp("主人公","Huh?");
MsgClose();
SEPlay("EV_SE_504");
SEWait();
MsgClose();
SEPlay("EV_SE_856");
ChClose(2);
EnvStop(1);
BGMStop();
MsgClose();
ScrFadeOut(0);
SEWait();
Wait(60,0);
EnvAutoSet(0);
SEPlay("EV_SE_628",0.3);
SEWait();
VoicePlay("R080200000_02_030");
MsgDisp("Sassa","This ground...
I also have to thank it...");
MsgClose();
BGMPlay("BGM_XMAS_TRHEE",0.01);
EnvPlay("SE_ENV_BG_EX001_CO2",1);
StlOpen("ev_02_16");
StlEye(2,0);
StlMouth(2,0);
ScrFadeIn(0);
MsgDisp("主人公","｛颯砂＊＊｝...?");
StlEye(2,0);
StlMouth(2,0);
VoicePlay("R080200000_02_040");
MsgDisp("Sassa","...I've never thought of training as
hard.");
StlEye(2,0);
StlMouth(2,0);
VoicePlay("R080200000_02_050");
MsgDisp("Sassa","So I have to thank everyone for making a
place where I can train easily for my
sports results.");
StlEye(2,0,0);
StlMouth(2,0);
StlEyeOpenLevel(2,0,1);
VoicePlay("R080200000_02_060");
MsgDisp("Sassa","I didn't realize how obvious that was
until I retired.");
MsgDisp("主人公","｛颯砂＊＊｝...");
StlEye(2,0);
StlMouth(2,0);
VoicePlay("R080200000_02_070");
MsgDisp("Sassa","This ground is something that everyone has
prepared for us.
And I ran on it with spiky shoes.");
StlEye(2,0,0);
StlMouth(2,0);
StlEyeOpenLevel(2,5,1);
VoicePlay("R080200000_02_080");
MsgDisp("Sassa","I wonder if it's okay for me to run
towards my dreams on my own.");
StlEye(2,1);
StlMouth(2,0);
MsgDisp("主人公","Of course.
My seniors and I are also dreaming by
supporting you, ｛颯砂＊＊｝.");
StlEye(2,1,0);
StlMouth(2,0);
StlEyeOpenLevel(2,5,1);
VoicePlay("R080200000_02_090");
MsgDisp("Sassa","Yeah...");
StlEye(2,1);
StlMouth(2,0);
VoicePlay("R080200000_02_100");
MsgDisp("Sassa","Then, I can...
I can keep running like this...");
MsgDisp("主人公","Did you forget it's everyone's dream?
｛颯砂＊＊｝, don't stop.");
StlEye(2,1);
StlMouth(2,0);
VoicePlay("R080200000_02_110");
MsgDisp("Sassa","Huh?");
StlEye(2,1,0);
StlMouth(2,1);
StlEyeOpenLevel(2,0,1);
VoicePlay("R080200000_02_120");
MsgDisp("Sassa","...You're incredible.");
StlEye(2,0,0);
StlMouth(2,1);
StlEyeOpenLevel(2,5,1);
VoicePlay("R080200000_02_130");
MsgDisp("Sassa","I...
I can't stop!
I'm off.");
MsgDisp("主人公","Huh?");
StlEye(2,1);
StlMouth(2,1);
VoicePlay("R080200000_02_140");
MsgDisp("Sassa","Manager.
It's been a while so, time me.");
MsgDisp("主人公","Hehe, okay.
...Ready?
Aaand, go.");
SEPlay("EV_SE_808",0,0.9,1.1);
MsgClose();
ScrFadeOut(0);
BGMVol(0.5,2);
Wait(10,0);
SEPlay("EV_SE_672",0,0.8);
SEWait();
Wait(30,0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(60,0);
BGMStop(6);
VoicePlay("R080200000_02_150");
MsgDisp("Sassa","This outfit is hard to run in!");
MsgDisp("主人公","No excuses!");
VoicePlay("R080200000_02_160");
MsgDisp("Sassa","Yeーes.");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(40,0);
MsgDisp("主人公","(And so, the last Christmas Eve of my high
school life is over...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
EnvAutoSet(1);
ChPrmTblAdd(2,0);
