ChEyeOpenLevel(2,-1);
ChMouthOpenLevel(2,-1);
ChCheek(2,0);
ChEye(2,5);
ChMouth(2,2);
ChMotion(2,5);
ChCheek(2,10);
VoicePlay("T020220021_02_000");
MsgDisp("Sassa","......You kissed me?");
MsgDisp("主人公","Yes......
I also love ｛颯砂＊＊｝.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("T020220021_02_010");
MsgDisp("Sassa","Seriously...... will you continue to run
with me from now on?");
MsgDisp("主人公","Yes! Let's try to achieve ｛颯砂＊＊｝'s
dream together.");
ChEye(2,4);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("T020220021_02_020");
MsgDisp("Sassa","Nothing could make me happier! 
I'm going to tell them both that you 
answered with a kiss!!");
MsgDisp("主人公","Eh∋
That's a little......");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,4);
ChCheek(2,0);
VoicePlay("T020220021_02_030");
MsgDisp("Sassa","A-Ah yeah..
That's right isn't it.");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,0);
ChCheek(2,0);
VoicePlay("T020220021_02_040");
MsgDisp("Sassa","......I'll give you an answer too.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(2,0,0);
Wait(120,0);
StlOpen("ev_02_17");
ScrFadeIn(0);
VoicePlay("T020220021_02_050");
MsgDisp("Sassa","Show your face......");
VoiceEVSPlay(2);
VoicePlay("T020220021_02_060");
MsgDisp("Sassa","｛主人公｝......
Yes......I love you.");
StlEffect(1,1,60);
Wait(60,0);
SEPlay("EV_SE_695");
Wait(120,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(160,0);
SEStop("EV_SE_695",3.5);
Wait(220,0);
