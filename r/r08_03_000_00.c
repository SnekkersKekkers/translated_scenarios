BGOpen("sc771",2);
MsgClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_FOOT_RUN_COME_ALONE",0,0.8);
SEWait();
ChOpen(3,34,0,0,0,#1,#1,0,0);
ChOpen(3,254,0,0,0,#1,#1,0,0);
VoiceEVSPlay(3);
VoicePlay("R080300000_03_000");
MsgDisp("Honda","｛主人公｝.
Ah, I'm so glad.");
MsgDisp("主人公","｛本多＊＊｝, what's wrong?");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("R080300000_03_010");
MsgDisp("Honda","I was thinking about what I would
do if you left, so I started running
in case you were already gone.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("R080300000_03_020");
MsgDisp("Honda","Come here.");
SEPlay("EV_SE_504");
SEWait();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(3);
MsgDisp("主人公","Woah woah, where are we going?");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE",0,0.4);
BGMStop();
MsgClose();
ScrFadeOut(0);
MsgClose();
SEWait();
EnvAutoSet(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(30,0);
VoicePlay("R080300000_03_030");
MsgDisp("Honda","We're still not there, okay?
Keep your eyes closed, okay?");
SEPlay("EV_SE_698",0,0.9);
SEWait();
SEPlay("EV_SE_675");
Wait(50,1);
VoicePlay("R080300000_03_040");
MsgDisp("Honda","Alright.
Okay, open your eyes.");
MsgClose();
SEWait();
StlOpen("ev_03_16");
StlEye(3,0);
StlMouth(3,0);
BGMPlay("BGM_XMAS_TRHEE",0.01);
EnvPlay("SE_ENV_BG_SC771_CO2",3,0.6);
ScrFadeIn(4,120);
Wait(40,0);
MsgDisp("主人公","Woah...! Incredible, all the
decorations are so pretty!");
StlEye(3,3);
StlMouth(3,1);
VoicePlay("R080300000_03_050");
MsgDisp("Honda","Surprised?");
MsgDisp("主人公","Yeah!
But, where are we...?");
StlEye(3,0);
StlMouth(3,0);
VoicePlay("R080300000_03_060");
MsgDisp("Honda","The middle school library.
I have a lot of memories of it.");
MsgDisp("主人公","But if we entered without
permission, they're gonna get angry...");
StlEye(3,1);
StlMouth(3,1);
VoicePlay("R080300000_03_070");
MsgDisp("Honda","Don't worry. I already talked to
the night school teacher about it.");
StlEye(3,2);
StlMouth(3,1);
VoicePlay("R080300000_03_080");
MsgDisp("Honda","Here, look. Isn't this picture
book so detailed?");
MsgDisp("主人公","This is a picture book?");
StlEye(3,2);
StlMouth(3,0);
VoicePlay("R080300000_03_090");
MsgDisp("Honda","Yeah, this is the same book I got
for Christmas when I was little.");
StlEye(3,2,0);
StlMouth(3,0);
StlEyeOpenLevel(3,5,1);
VoicePlay("R080300000_03_100");
MsgDisp("Honda","I managed to find it again while
being a bookworm here.");
StlEye(3,2,0);
StlMouth(3,1);
StlEyeOpenLevel(3,0,1);
VoicePlay("R080300000_03_110");
MsgDisp("Honda","I was so happy... and sometimes
I just opened and read it again.");
MsgDisp("主人公","I see...");
StlEye(3,3);
StlMouth(3,1);
VoicePlay("R080300000_03_120");
MsgDisp("Honda","Yeah, this is my sacred book and
place. I wanted you to see it.");
MsgDisp("主人公","｛本多＊＊｝...
Thank you.");
StlEye(3,3,0);
StlMouth(3,1);
StlEyeOpenLevel(3,5,1);
VoicePlay("R080300000_03_130");
MsgDisp("Honda","Did you know, you now know every side 
of me?");
MsgDisp("主人公","Huh?");
StlEye(3,2);
StlMouth(3,0);
VoicePlay("R080300000_03_140");
MsgDisp("Honda","My roots.
The ammonite in the mall that I showed
you... and here.");
StlEye(3,3);
StlMouth(3,1);
VoicePlay("R080300000_03_150");
MsgDisp("Honda","Now it's your turn.
Show me your roots sometime. I
want to know every side of you.");
MsgDisp("主人公","｛本多＊＊｝......");
StlEye(3,2);
StlMouth(3,1);
VoicePlay("R080300000_03_160");
MsgDisp("Honda","Oh, it's about time we go. Teacher
said we would only get fifteen minutes.
Shall we?");
BGMStop(5);
MsgClose();
ScrFadeOut(0);
StlClose();
MsgClose();
MsgDisp("主人公","(｛本多＊＊｝, thank you. For sharing
your precious memories with me...)");
MsgClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(40,0);
MsgDisp("主人公","(And just like that, my last
Christmas Eve as a high school
student comes to an end...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
EnvAutoSet(1);
ChPrmTblAdd(3,0);
