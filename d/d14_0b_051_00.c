ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ChCheek(3,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ChCheek(1,0);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
ChCheek(4,0);
ChMotion(4,1,1);
VoicePlay("D140B05100_04_000");
MsgDisp("Nanatsumori","Why don't you change
where you're sitting next time?");
ChMouth(1,2);
MsgDisp("主人公","?");
VoicePlay("D140B05100_01_000");
MsgDisp("Kazama","Why?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("D140B05100_03_000");
MsgDisp("Honda","I think it's better if 
Ryo-kun sits in that seat.");
MsgDisp("主人公","Are you talking about 
the seat next to me?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("D140B05100_03_010");
MsgDisp("Honda","Right right.
Surprisingly, couples mostly sit 
next to each other and not
opposite to each other.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ChEyeOpenLevel(1,8);
ChCheek(1,7);
VoicePlay("D140B05100_01_010");
MsgDisp("Kazama","...It's none of your business.
I would do that even if you 
didn't tell me to, got it?");
MsgDisp("主人公","Y-yeah...");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("D140B05100_04_010");
MsgDisp("Nanatsumori","Oh my, my my.
They're getting shy.");
ChEye(1,0);
ChMouth(1,2);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5,1);
ChEyeOpenLevel(3,0);
VoicePlay("D140B05100_03_020");
MsgDisp("Honda","A childhood-friends-to-lovers story?
That sounds nice!");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0,1);
ChCheek(1,0);
VoicePlay("D140B05100_01_020");
MsgDisp("Kazama","It doesn't matter how it sounds, 
it's just how it is.
Right?");
MsgDisp("主人公","(Ugh... it's true we are
childhood friends but...
I'm still embarrassed after all.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
ChClose(3,0,0);
ChClose(4,0,0);
