SEPlay("EV_SE_DOOR_024");
SEWait();
MsgDisp("主人公","Yeees?");
SEPlay("EV_SE_DOOR_007");
Wait(18);
MsgClose();
BGMPlay("BGM_C03_HONDA_A");
ChOpen(3,255,4,4,0,#1,#1,0,0);
VoicePlay("M010300000_03_000");
MsgDisp("Honda","Ah, thank goodness.
You're doing better than I expected.");
MsgDisp("主人公","Eh, ｛本多＊＊｝∋");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,5);
VoicePlay("M010300000_03_010");
MsgDisp("Honda","Aa, bad, bad!
Stay laying down, I'll be leaving soon.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0);
VoicePlay("M010300000_03_020");
MsgDisp("Honda","I actually got here about thirty minutes
ago, but I was talking to other people in
the house.");
MsgDisp("主人公","Eh∋ you were?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,3);
VoicePlay("M010300000_03_030");
MsgDisp("Honda","Yeah yeah.
They asked me what you were like at
school, like.");
MsgDisp("主人公","Ehー...
You didn't tell them anything weird,
right?");
ChSet(3,4);
VoicePlay("M010300000_03_040");
MsgDisp("Honda","What would be weird?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("M010300000_03_050");
MsgDisp("Honda","I just said you were peppy at school too,
that you work hard, things like that?");
ChMouth(3,0);
ChMotion(3,4);
ChEyeOpenLevel(3,0);
VoicePlay("M010300000_03_060");
MsgDisp("Honda","And that I like how you always look like
you enjoy listening to me, you ask
questions, and laugh with me...");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("M010300000_03_070");
MsgDisp("Honda","And how school without you there's not as
fun, too.");
MsgDisp("主人公","｛本多＊＊｝...");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1);
VoicePlay("M010300000_03_080");
MsgDisp("Honda","Ne ne, so like, think you'll be able to
come next week?");
MsgDisp("主人公","Mm, I think I'll be okay.
Sorry, I made you worry.");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,0);
VoicePlay("M010300000_03_090");
MsgDisp("Honda","That's right, I did worry?
But, since you've gotten better, all's
well!");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,5);
VoicePlay("M010300000_03_100");
MsgDisp("Honda","... tst, oh no.
I said I wouldn't stay too long but I got
caught up in talking again, huh?");
MsgDisp("主人公","Mm Mm, thanks for coming all this way
today.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1);
ChEyeOpenLevel(3,0);
VoicePlay("M010300000_03_110");
MsgDisp("Honda","You're soo welcome!
Well then, I'll be looking forward to when
I can see you at school again.");
MsgClose();
SEPlay("EV_SE_690",0.2,0.5);
BGMStop();
MsgClose();
ChClose(3);
Wait(50,1);
SEStop("EV_SE_690",0.5);
SEPlay("EV_SE_DOOR_008",0,0.5);
SEWait();
MsgDisp("主人公","(｛本多＊＊｝, you paid me a get well
visit...
I better get better fast!)");
