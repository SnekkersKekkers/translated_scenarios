BGMStop();
BGOpen("sc010",1);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ScrFadeIn(0);
MsgDisp("主人公","It's almost sports day, right?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("F020100006_01_000");
MsgDisp("Kazama","I know, huh.");
MsgDisp("主人公","｛風真＊＊｝, you're good at sports.
You'll be fine.");
VoicePlay("F020100006_01_010");
MsgDisp("Kazama","I'm not particularly good.");
MsgDisp("主人公","What, are you mad?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
ChEyeOpenLevel(1,0);
VoicePlay("F020100006_01_020");
MsgDisp("Kazama","I'm not mad. I just don't want you to be
the only one to see me lose. That's all.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("F020100006_01_030");
MsgDisp("Kazama","At kindergarten field day, I had to carry
the 2nd place flag while you were
watching. I still dream about it.");
MsgDisp("主人公","Um...
I don't remember that?");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,#1);
VoicePlay("F020100006_01_040");
MsgDisp("Kazama","You could at least comfort me.
Well, can I expect you won't forget your
high school sports day?");
MsgDisp("主人公","I'm not that forgetful anymore.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("F020100006_01_050");
MsgDisp("Kazama","Then I'm in trouble.");
MsgDisp("主人公","(｛風真＊＊｝, you can do sports.
Do you really need to worry like this?)");
