MsgDisp("主人公","Recently it's been super lively around
you, ｛風真＊＊｝ hasn't it?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B070100001_01_140");
MsgDisp("Kazama","Yeah, definitely.
You're part of that crew too.");
MsgDisp("主人公","Crew you say.");
ChEye(1,4);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("B070100001_01_150");
MsgDisp("Kazama","I'm basically alone at home.
So maybe it's better for school to be
lively?");
MsgDisp("主人公","You live alone, don't you ｛風真＊＊｝? If
you get lonely, you're free to come over
anytime. Our houses are in the same
neighborhood after all.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,4);
ChCheek(1,7);
VoicePlay("B070100001_01_160");
MsgDisp("Kazama","Anytime...
Are you saying that for real?");
MsgDisp("主人公","Yeah.
Huh?
Is that wrong?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
ChCheek(1,10);
VoicePlay("B070100001_01_170");
MsgDisp("Kazama","It's fine but, no it's not good!
You're far off the mark again.
Seriously, stop with that finishing move.");
MsgDisp("主人公","(...Finishing move?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
