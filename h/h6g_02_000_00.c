BGOpen("ho000",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
ChOpen(2,255,0,0,0,-1,-1,0,0);
VoiceEVSPlay(2);
VoicePlay("H6G0200000_02_000");
MsgDisp("Sassa","｛主人公｝.");
MsgDisp("主人公","Oh, ｛颯砂＊＊｝!
What's up?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,7);
VoicePlay("H6G0200000_02_010");
MsgDisp("Sassa","Are you playing dumb?
I heard that you won the grand prize
in the gardening club's competition.");
MsgDisp("主人公","Yes, that's right.
Is that why you came all the way here?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("H6G0200000_02_020");
MsgDisp("Sassa","Of course.
The grand prize is for first place, right?
I'm here to lift you into the air.");
MsgDisp("主人公","Huh∋
We can't do something like that here.");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,3);
ChEyeOpenLevel(2,0);
VoicePlay("H6G0200000_02_030");
MsgDisp("Sassa","Haha, next time at school, then.
Mikage-sensei and I will do it");
MsgDisp("主人公","Geez, we can't do it anywhere......
Hehe, thanks, though.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("H6G0200000_02_040");
MsgDisp("Sassa","......Y-Yeah. Of course the flowers would
bloom beautifully if you take care of
them with a smile like that.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,1);
VoicePlay("H6G0200000_02_050");
MsgDisp("Sassa","I'm feeling more motivated, too.
I'm going to go for a bit of a run.
See you.");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(2);
SEWait();
MsgDisp("主人公","Thank you, ｛颯砂＊＊｝.");
MsgDisp("主人公","(I'm so happy!
I'm glad I worked so hard
for the gardening club.)");
MsgClose();
ScrFadeOut(0,0);
