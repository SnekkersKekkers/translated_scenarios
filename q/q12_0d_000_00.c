BGOpen("sc810",0);
ChLayout(1);
MsgClose();
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,0);
ScrFadeIn(0);
MsgDisp("主人公","We arrived. It's finally the end of the
school trip......");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("Q120D00000_21_000");
MsgDisp("Michiru","Everything was so fun......
It's such a bummer that it's over.");
ChEye(22,2);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("Q120D00000_22_000");
MsgDisp("Hikaru","Hey hey hey～∋
Let's keep positive?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("Q120D00000_22_010");
MsgDisp("Hikaru","We had such a good time on the school
trip, let's go on a private trip next
time! Of course, just the three of us♪");
MsgDisp("主人公","......Yeah!
｛みちる＊｝, ｛ひかる＊｝, thank you 
so much for being with me!");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("Q120D00000_21_010");
MsgDisp("Michiru","The pleasure is mine.
We made great memories thanks to you.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
ChEyeOpenLevel(22,0);
VoicePlay("Q120D00000_22_020");
MsgDisp("Hikaru","Merci, Mari▼");
ChEye(22,0);
ChEyeOpenLevel(22,10);
MsgDisp("主人公","Hehe, merci!");
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
ChClose(22,0,0);
