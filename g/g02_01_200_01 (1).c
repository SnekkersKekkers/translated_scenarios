MsgClose();
ChOpen(1,255,0,4,2,#1,#1,0,0);
VoicePlay("G020120001_01_000");
MsgDisp("Kazama","Sure, it looks pretty, but......they're
desperately glowing like this to find
partners.");
MsgDisp("主人公","Right.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020120001_01_010");
MsgDisp("Kazama","After waiting ten whole months to finally
become full-grown insects......");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020120001_01_020");
MsgDisp("Kazama","I waited ten years.
So I'm not gonna just give up and fade
into the background.");
MsgDisp("主人公","Is something wrong, ｛風真＊＊｝?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,4);
ChEyeOpenLevel(1,0);
VoicePlay("G020120001_01_030");
MsgDisp("Kazama","I don't understand myself why I'm talking
about this. I just couldn't stop myself
after seeing the fireflies.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020120001_01_040");
MsgDisp("Kazama","Look, I can't do anything about you
choosing someone besides me. But I've got
a duty to the me from primary to middle
school.");
MsgDisp("主人公","｛風真＊＊｝......");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G020120001_01_050");
MsgDisp("Kazama","Sorry. But if I just stand by, the old me
wouldn't accept it.");
MsgDisp("主人公","(｛風真＊＊｝ isn't acting like his usual
self today.
I wonder what caused all this......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
