MsgClose();
BGOpen("ho000",2);
ChLayout(1);
ChOpen(8,255,0,2,4,#1,#1,6,0);
ScrFadeIn(0);
ChMotion(8,4,1);
VoicePlay("B150800000_08_000");
MsgDisp("Shirahane","Please have mercy on me soon..");
MsgDisp("主人公","Ah...sorry?");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("B150800000_08_010");
MsgDisp("Shirahane","You don't have to apologize.
It's just ticklish.");
ChEye(8,4);
ChMouth(8,4);
VoicePlay("B150800000_08_020");
MsgDisp("Shirahane","Do you like touchin' people?");
MsgDisp("主人公","No.
It's because it's ｛大地＊＊｝?");
ChEye(8,0);
ChMouth(8,4);
ChMotion(8,1,1);
ChEyeOpenLevel(8,10);
ChMouthOpenLevel(8,0);
ChCheek(8,8);
VoicePlay("B150800000_08_030");
MsgDisp("Shirahane","∋");
ChEye(8,4);
ChMouth(8,4);
ChMotion(8,4,1);
VoicePlay("B150800000_08_040");
MsgDisp("Shirahane","I see...
Because it's me huh...");
MsgDisp("主人公","Sorry.
If you don't like it I'll stop.");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("B150800000_08_050");
MsgDisp("Shirahane","It's not that I dislike it.
It's just, a bit embarrasin'.");
ChEye(8,3);
ChMouth(8,3);
VoicePlay("B150800000_08_060");
MsgDisp("Shirahane","Go easy on the ticklin', alright?
See you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(8,0,30);
MsgDisp("主人公","(I didn't mean to tickle him though...)");
MsgClose();
ScrFadeOut(0,0);
