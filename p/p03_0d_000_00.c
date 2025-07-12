BGOpen("sc720",0);
BGMPlay("BGM_PLACE_SHOP");
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for waiting. Here is your
matcha and mitarashi dango.");
MsgDisp("主人公","(Phew...... I didn't think this many
customers would come......)");
MsgClose();
ChOpen(21,254,0,0,0,#1,#1,0,1);
ChOpen(22,254,0,0,3,#1,#1,0,2);
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,5,1);
ChEyeOpenLevel(22,0);
VoicePlay("P030D00000_22_000");
MsgDisp("Hikaru","Mari, your yukata is so cute▼");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
ChEyeOpenLevel(21,0);
VoicePlay("P030D00000_21_000");
MsgDisp("Michiru","Mm, the mitarashi dango smell so good.");
MsgDisp("主人公","Ah, ｛ひかる＊｝, ｛みちる＊｝.
Welcome!");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("P030D00000_22_010");
MsgDisp("Hikaru","Your Japanese-style cafe is doing
so well～! As expected, since you're
here as the face of the cafe▼");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P030D00000_21_010");
MsgDisp("Michiru","It's true.
Well, could we have your recommendation,
as the face of this cafe?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
ChEyeOpenLevel(22,0);
VoicePlay("P030D00000_22_020");
MsgDisp("Hikaru","Hikaru wants something to eat too～♪");
MsgDisp("主人公","Of course!");
MsgClose();
ScrFadeOut(0,0);
