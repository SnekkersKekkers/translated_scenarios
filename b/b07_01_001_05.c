MsgDisp("主人公","Lately, we've been spending more time with
｛颯砂＊＊｝ and ｛氷室＊＊｝.
The four of us.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B070100001_01_240");
MsgDisp("Kazama","You're the lone girl in the group.");
MsgDisp("主人公","I wonder if it looks strange to other
people that I'm there...");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
VoicePlay("B070100001_01_250");
MsgDisp("Kazama","...What's up?
Did someone say something weird to you?");
MsgDisp("主人公","Eh?
It's not like that.");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,4);
ChEyeOpenLevel(1,0);
VoicePlay("B070100001_01_260");
MsgDisp("Kazama","You suddenly said something so meek, it
worried me...");
MsgDisp("主人公","Sorry...");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B070100001_01_270");
MsgDisp("Kazama","It makes me uneasy.
Don't say things out of character so
suddenly.");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,10);
VoicePlay("B070100001_01_280");
MsgDisp("Kazama","We can be together like this because
you're there. if you weren't, it wouldn't
be like this. Everyone likes——");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
ChCheek(1,7);
VoicePlay("B070100001_01_290");
MsgDisp("Kazama","So, don't think weird things anymore.
You're our keystone.");
MsgDisp("主人公","(｛風真＊＊｝...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
