ChClose(3);
BGMStop();
BGOpen("ho000",2);
MsgClose();
ChOpen(3,255,0,0,0,-1,-1,0,0);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3);
ChEyeOpenLevel(3,0);
ScrFadeIn(0);
VoicePlay("K020301100_03_000");
MsgDisp("Honda","Today was a lot of fun!");
MsgDisp("主人公","Hehe, I had fun too.
Thanks for walking me home.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
SEPlay("EV_SE_665");
SEWait();
VoicePlay("K020301100_03_010");
MsgDisp("Honda","Then...... here!
It's your birthday today, right?
So here's your present.");
MsgDisp("主人公","Oh!?　You remembered?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4);
VoicePlay("K020301100_03_020");
MsgDisp("Honda","Did you think I forgot?
Actually, it was really hard pretending
that I forgot your birthday.");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,4);
VoicePlay("K020301100_03_030");
MsgDisp("Honda","In the end, I came with you all the 
way back to your place, without finding 
the right timing.");
MsgDisp("主人公","Thank you for being so considerate
of me.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,0);
VoicePlay("K020301100_03_040");
MsgDisp("Honda","Well, are you happy?");
MsgDisp("主人公","Of course!");
ChEye(3,5);
ChMouth(3,4);
ChMotion(3,5);
VoicePlay("K020301100_03_050");
MsgDisp("Honda","Ah, but I'm forgetting something even
more important than presents!");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("K020301100_03_060");
MsgDisp("Honda","Happy birthday!
I had to say that properly.");
MsgDisp("主人公","Yeah, thanks!");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3);
ChEyeOpenLevel(3,0);
VoicePlay("K020301100_03_070");
MsgDisp("Honda","You're welcome!
Well, see you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(3);
Wait(30);
MsgDisp("主人公","(Today was a wonderful birthday......)");
MsgClose();
ScrFadeOut(0,0);
