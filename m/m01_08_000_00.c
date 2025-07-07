SEPlay("EV_SE_DOOR_024");
SEWait();
MsgDisp("主人公","Ah......Yes.");
SEPlay("EV_SE_DOOR_007");
Wait(18);
BGMPlay("BGM_C08_DAICHI_A",0.01);
MsgClose();
ChOpen(8,254,2,0,4,-1,-1,0,0);
VoicePlay("M010800000_08_000");
MsgDisp("Shirahane","I'm coming inー......");
MsgDisp("主人公","Eh?∋
｛大地＊＊｝, why......?");
ChEye(8,2);
ChMouth(8,1);
ChMotion(8,1,1);
ChCheek(8,5);
VoicePlay("M010800000_08_010");
MsgDisp("Shirahane","Why nothin'.
Don'tcha know I'm worried?!");
ChEye(8,2);
ChMouth(8,4);
ChMotion(8,2,1);
VoicePlay("M010800000_08_020");
MsgDisp("Shirahane","Ah...... Sorry, yeah?
For shouting.");
MsgDisp("主人公","MmMmm.
So you came to wish me well?");
ChEye(8,4);
ChMouth(8,0);
ChCheek(8,2);
VoicePlay("M010800000_08_030");
MsgDisp("Shirahane","Yep.");
VoicePlay("M010800000_08_040");
MsgDisp("Shirahane","Just from you not being 'round,
feels like I'm gonna break down myself.");
MsgDisp("主人公","｛大地＊＊｝......Thank you.
I'm better now, so.");
ChEye(8,2);
ChMouth(8,4);
ChMotion(8,0,1);
VoicePlay("M010800000_08_050");
MsgDisp("Shirahane","No lie?");
MsgDisp("主人公","Mm.");
VoicePlay("M010800000_08_060");
MsgDisp("Shirahane","Starting next week we'll meet again?");
MsgDisp("主人公","Hehe,I'll go to work too.");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
ChEyeOpenLevel(8,0);
VoicePlay("M010800000_08_070");
MsgDisp("Shirahane","Heheh, that's good!
I'll be biding the time.");
ChEye(8,3);
ChMouth(8,0);
ChMotion(8,0,1);
ChEyeOpenLevel(8,10);
VoicePlay("M010800000_08_080");
MsgDisp("Shirahane","But, no more overdoing it.
Take it easy for today.");
MsgDisp("主人公","Mm, I'll do that.");
ChEye(8,4);
ChMouth(8,0);
VoicePlay("M010800000_08_090");
VoiceEVSPlay(8);
MsgDisp("Shirahane","Atta girl.
N'that case, night night,
｛主人公｝.");
MsgClose();
SEPlay("EV_SE_690",0.2,0.5);
BGMStop();
ChClose(8,0,30);
Wait(50,1);
SEStop("EV_SE_690",0.5);
SEPlay("EV_SE_DOOR_008",0,0.5);
SEWait();
MsgDisp("主人公","(I made ｛大地＊＊｝ worry about me.
If I don't get better fast......!)");
