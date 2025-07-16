MsgClose();
BGOpen("ho000",2);
ChLayout(1);
ChOpen(8,255,0,2,4,#1,#1,4,0);
ScrFadeIn(0);
ChMotion(8,2,1);
VoicePlay("B150800200_08_000");
MsgDisp("Shirahane","You're so mean...");
MsgDisp("主人公","Eh?");
ChEye(8,2);
ChMouth(8,4);
ChMotion(8,0,1);
VoicePlay("B150800200_08_010");
MsgDisp("Shirahane","Do you enjoy seeing me troubled?");
MsgDisp("主人公","That's not what I intended...");
ChEye(8,0);
ChMouth(8,4);
ChEyeOpenLevel(8,10);
VoicePlay("B150800200_08_020");
MsgDisp("Shirahane","...Hm?");
ChEye(8,0);
ChMouth(8,4);
ChMotion(8,2,1);
VoicePlay("B150800200_08_030");
MsgDisp("Shirahane","Could it be, you don't see that I look
troubled?");
MsgDisp("主人公","Umm... maybe you look a bit bashful?");
ChEye(8,0);
ChMouth(8,5);
ChMotion(8,5,1);
ChEyeOpenLevel(8,10);
VoicePlay("B150800200_08_040");
MsgDisp("Shirahane","∋ That's no good...");
ChEye(8,2);
ChMouth(8,4);
ChMotion(8,2,1);
VoicePlay("B150800200_08_050");
MsgDisp("Shirahane","I know you like ticklin' me. and I..
looked like I was happy 'bout it?");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("B150800200_08_060");
MsgDisp("Shirahane","Well, your hands won't stop.
Forgive me for callin' ya mean, alright?");
MsgDisp("主人公","Umm...");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("B150800200_08_070");
MsgDisp("Shirahane","Next time I'll train myself to withstand
the ticklin'.
Well now, see ya!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(8,0,30);
MsgDisp("主人公","(Train to withstand the tickling?)");
MsgClose();
ScrFadeOut(0,0);
