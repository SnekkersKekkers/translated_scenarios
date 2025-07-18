MsgDisp("主人公","What kind of food do you like,
｛ひかる＊｝?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
ChEyeOpenLevel(22,0);
VoicePlay("F032200000_22_050");
MsgDisp("Hikaru","Tasty food～!");
MsgDisp("主人公","That's right, but.
Is there anything you love?");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,2,1);
VoicePlay("F032200000_22_060");
MsgDisp("Hikaru","Ehー...Now that you ask me...
Nothing comes to mind. I like everything.");
MsgDisp("主人公","Do you have a food you dislike, then?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,0,1);
ChEyeOpenLevel(22,0);
VoicePlay("F032200000_22_070");
MsgDisp("Hikaru","No♪");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("F032200000_22_080");
MsgDisp("Hikaru","...Ah!
There is something I love!
Hamburgerー▼");
MsgDisp("主人公","Ehhh∋");
ChEye(22,4);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("F032200000_22_090");
MsgDisp("Hikaru","I mean～
I'm rarely allowed to eat it.
Even though it's super delicious?");
MsgDisp("主人公","(Ah...｛ひかる＊｝ is a model so, I wonder
if there's restrictions on what she can eat?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(22,#1);
