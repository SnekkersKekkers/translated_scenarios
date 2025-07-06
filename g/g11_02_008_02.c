BGOpen("sc200",0);
ScrFadeIn(0);
MsgDisp("主人公","(Ah, nice weather......)");
MsgClose();
SEPlay("EV_SE_625");
SEWait();
BGMPlay("BGM_C02_SASSA_A",0.01);
ChOpen(2,41,3,0,4,-1,-1,0,0);
VoiceEVSPlay(2);
VoicePlay("G110200802_02_000");
MsgDisp("Sassa","｛主人公｝.");
MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Are you training on your lunch break too?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("G110200802_02_010");
MsgDisp("Sassa","Yeah, with you. When the weather's nice I
feel like moving about.");
MsgDisp("主人公","Hehe, maybe.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("G110200802_02_020");
MsgDisp("Sassa","Do you have a bit of time?
Let's run together.");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(2,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev002",0);
BGMVol(0.5,2);
SEPlay("EV_SE_FOOT_037");
ChOpen(2,100,0,1,0,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("G110200802_02_030");
MsgDisp("Sassa","Hey, haven't we been to the farm before?");
MsgDisp("主人公","Yeah. 
We milked cows, right?");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G110200802_02_040");
MsgDisp("Sassa","Ah, yeah. Right, right.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G110200802_02_050");
MsgDisp("Sassa","When I'm running, I lose all thoughts.");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G110200802_02_060");
MsgDisp("Sassa","But recently, I've suddenly had a vision
of you milking a cow......");
MsgDisp("主人公","Ehhh-∋
W-What is that?");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G110200802_02_070");
MsgDisp("Sassa","You looked like you were having so much
fun milking it. It was troubling......");
SEStop("EV_SE_FOOT_037",1.5);
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(2,0,0);
BGOpen("sc200",0);
MsgClose();
ChOpen(2,41,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("G110200802_02_080");
MsgDisp("Sassa","I wonder if there's anything I can do
about this?");
MsgDisp("主人公","I'm troubled now that you've told me
that......");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,2);
ChEyeOpenLevel(2,7);
VoicePlay("G110200802_02_090");
MsgDisp("Sassa","YEah...... It was strangely relaxing, But
it was weird to think about that whilst
running......");
SEPlay("EV_SE_SCHOOL_002");
Wait(50,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("G110200802_02_100");
MsgDisp("Sassa","Oh, sorry. I'm such an idiot. I'll try my
best to forget about it......");
MsgClose();
BGMStop();
SEPlay("EV_SE_626");
MsgClose();
ChClose(2);
MsgDisp("主人公","(Did I really look like I was having so
much fun milking the cow......)");
SEStop("EV_SE_SCHOOL_002",1);
MsgClose();
ScrFadeOut(0,0);
