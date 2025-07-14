ChPosition(8,0);
Wait(60,0);
ChEye(8,0);
ChMouth(8,4);
ChMotion(8,0);
VoicePlay("B080800004_08_000");
MsgDisp("Shirahane","They left...
Say, maybe they had some business with
you?");
MsgDisp("主人公","Y-Yeah...");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,2);
VoicePlay("B080800004_08_010");
MsgDisp("Shirahane","Well now, I'm headin' home but...
Maybe you should give 'em a call before it
gets too late?");
MsgDisp("主人公","Yeah, that's right...");
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,1);
VoicePlay("B080800004_08_020");
MsgDisp("Shirahane","Well, I'll see you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(8);
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
