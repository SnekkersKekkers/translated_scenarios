MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc771",2);
ChLayout(2);
MsgClose();
ChOpen(5,34,0,0,4,#1,#1,0,0,0,30);
ChOpen(6,34,0,0,4,#1,#1,0,1,0,30);
ChOpen(7,34,0,0,0,#1,#1,0,2,0,30);
ScrFadeIn(0);
VoiceEVSPlay(7);
VoicePlay("D130C00100_07_000");
MsgDisp("Mikage","｛主人公｝, are you having fun?");
MsgDisp("主人公","Yes, because I'm together 
with everyone.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("D130C00100_05_000");
MsgDisp("Hiiragi","Without you, 
we wouldn't be complete.");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,3);
VoicePlay("D130C00100_06_000");
MsgDisp("Himuro","Yeah. 
Now, we're altogether.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("D130C00100_07_010");
MsgDisp("Mikage","Then, shall we say \"Merry
Christmas\" one more time?");
MsgDisp("主人公","Hehe, yes.");
ChEye(5,3);
ChMouth(5,3);
ChMotion(5,0,1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("D130C00100_05_010");
VoicePlay("D130C00100_06_010");
VoicePlay("D130C00100_07_020");
MsgDisp("Everyone","Merry Christmas!");
ChMouth(5,4);
ChMotion(5,0);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("D130C00100_06_020");
MsgDisp("Himuro","Now I feel like 
exchanging presents again.");
ChEye(5,4);
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("D130C00100_07_030");
MsgDisp("Mikage","Oh, that's a 
good shout Inori.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("D130C00100_05_020");
MsgDisp("Hiiragi","But everyone would probably
be thinking of you when
they choose their presents.");
MsgDisp("主人公","EH?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,3);
VoicePlay("D130C00100_06_030");
MsgDisp("Himuro","That's for sure...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("D130C00100_07_040");
MsgDisp("Mikage","Hmm, then it would probably
be faster for everyone 
o give you a present.");
MsgDisp("主人公","Ehh?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("D130C00100_05_030");
MsgDisp("Hiiragi","Heheh, I have no objections.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("D130C00100_06_040");
MsgDisp("Himuro","Yeah, that seems alright.");
ChMotion(5,0);
ChEyeOpenLevel(5,#1);
MsgDisp("主人公","Ehhh∋");
MsgDisp("主人公","(I'm happy, but that's not a
present exchange anymore!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
ChClose(6,0,0);
ChClose(7,0,0);
