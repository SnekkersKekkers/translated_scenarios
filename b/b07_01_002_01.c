MsgDisp("主人公","｛風真＊＊｝, recently you've been talking
to ｛本多＊＊｝ a lot haven't you?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,8);
VoicePlay("B070100002_01_010");
MsgDisp("Kazama","Talking?
Is that really what it looks like?");
MsgDisp("主人公","Eh?");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B070100002_01_020");
MsgDisp("Kazama","That's just Honda one-sidedly rattling on.");
MsgDisp("主人公","Hehe.
｛本多＊＊｝ is good at teaching isn't he?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B070100002_01_030");
MsgDisp("Kazama","Teaching demon more like. But he's clever
at sparking your interest, which makes it
worse. In the end, I still end up
listening.");
MsgDisp("主人公","Hehe, isn't ｛風真＊＊｝ a good listener?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("B070100002_01_040");
MsgDisp("Kazama","No, Honda isn't the type of demon to
choose his audience.
He'll attack anyone in the same way.");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B070100002_01_050");
MsgDisp("Kazama","When he caught Vice Principal Himuro at
the school gates to talk about Italian
cars I was still taken aback all the same.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,4);
ChEyeOpenLevel(1,0);
VoicePlay("B070100002_01_060");
MsgDisp("Kazama","Well, in the end I ended up getting
dragged into it.");
MsgDisp("主人公","(Hehe, as I thought ｛風真＊＊｝ is a good
listener.)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
