MsgDisp("主人公","｛氷室＊＊｝, do you listen to
music?
Is there a type you like.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B070600000_06_190");
MsgDisp("Himuro","I listen to whatever.
I like rock the most though.");
MsgDisp("主人公","Ehhh, that's somewhat surprising.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
VoicePlay("B070600000_06_200");
MsgDisp("Himuro","What sort of image do you have of me?");
MsgDisp("主人公","I feel like you might listen to classical
music maybe?");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("B070600000_06_210");
MsgDisp("Himuro","That's Reiichi-san's image.");
MsgDisp("主人公","I-I see.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B070600000_06_220");
MsgDisp("Himuro","Well, I listen to classical too though.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B070600000_06_230");
MsgDisp("Himuro","Rock music gets me pumped.
I like it in a different way.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B070600000_06_240");
MsgDisp("Himuro","Pop isn't bad but it's a bit of a safe
choice.");
MsgDisp("主人公","(He's talking a lot.
He must really like music.)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(6,#1);
ChMouthOpenLevel(6,#1);
ChCheek(6,0);
