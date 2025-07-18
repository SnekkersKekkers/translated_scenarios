ChLayout(1);
BGOpen("sc510",0);
ScrFadeIn(0);
MsgDisp("主人公","(I have biology with
｛御影＊＊｝ next. I
wonder if there's something I can help
with...)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
SEPlay("EV_SE_DOOR_024");
SEWait();
VoicePlay("F100710000_07_000");
MsgDisp("Mikage","Oh, come in～");
SEPlay("EV_SE_DOOR_019");
MsgDisp("主人公","Please pardon me.");
MsgClose();
BGOpen("sc351",0);
BGMPlay("BGM_C07_MIKAGE_A",0.01);
ChOpen(7,37,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(7);
VoicePlay("F100710000_07_010");
MsgDisp("Mikage","｛主人公｝, what's up.");
MsgDisp("主人公","Is there anything I can do to help you
prepare for biology next?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("F100710000_07_020");
MsgDisp("Mikage","Ooh, thank you.
But there's nothing in particular.");
MsgDisp("主人公","Is that so...
Then, please excuse me.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("F100710000_07_030");
MsgDisp("Mikage","Oh, wait, wait.
You came all this way already.
I'll serve you some tea.");
MsgDisp("主人公","Hehe.
This is kind of like
｛御影＊＊｝ 's house.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100710000_07_040");
MsgDisp("Mikage","Well, that is what it is.
Please wait a moment.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
SEPlay("EV_SE_SCHOOL_002");
Wait(60,0);
MsgDisp("主人公","｛御影＊＊｝, thank you
for the tea.
The school bell has rung.");
MsgClose();
ChOpen(7,37,1,0,0,#1,#1,0,0);
VoicePlay("F100710000_07_050");
MsgDisp("Mikage","I don't mind.
Well, let's go.");
MsgDisp("主人公","Today we're in the science room, and not
the classroom though...");
VoicePlay("F100710000_07_060");
MsgDisp("Mikage","That's right.");
MsgDisp("主人公","If you show up dressed like that, you'll
get scolded by Himuro-sensei?");
ChEye(7,5);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("F100710000_07_070");
MsgDisp("Mikage","Ohh, that's right!
That was closeー.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(7);
VoicePlay("F100710000_07_080");
MsgDisp("Mikage","Sorry, so ahead.
I'll go after I change into my suit.");
MsgDisp("主人公","Hehe, yes.");
SEStop("EV_SE_SCHOOL_002",1);
MsgDisp("主人公","(I couldn't help out, but I'm glad I came
to see how he was doing. It would be tough
if he got scolded by Himuro-sensei again.)");
MsgClose();
ScrFadeOut(0,0);
