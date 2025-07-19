ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ChCheek(7,0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
ChCheek(5,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChCheek(6,0);
VoicePlay("D140C05002_06_000");
MsgDisp("Himuro","Are we distracting you?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
ChEyeOpenLevel(5,0);
VoicePlay("D140C05002_05_000");
MsgDisp("Hiiragi","It's an important role.");
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,2);
VoicePlay("D140C05002_07_000");
MsgDisp("Mikage","Yeah?");
MsgDisp("主人公","Eh?");
ChEye(5,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("D140C05002_06_010");
MsgDisp("Himuro","You two seem out of place.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("D140C05002_07_010");
MsgDisp("Mikage","Oi, what are you saying?
So we're eating lunch noisily.
That's like the basics of a cafeteria.");
ChMouth(5,2);
MsgDisp("主人公","That's right.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChEyeOpenLevel(6,8);
VoicePlay("D140C05002_06_020");
MsgDisp("Himuro","...Are you also alright with that?");
MsgDisp("主人公","Yeah, of course.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("D140C05002_05_010");
MsgDisp("Hiiragi","I'm glad.
Then, Inori, let's have some fun whilst
being their distraction.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("D140C05002_07_020");
MsgDisp("Mikage","Haa, don't pay so much attention to what
others are thinking.");
MsgDisp("主人公","(Having lunch with ｛御影＊＊｝
alone...
Maybe it is a bit embarrassing?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
ChClose(6,0,0);
ChClose(7,0,0);
