MsgClose();
ChOpen(2,255,4,0,0,#1,#1,0,0);
VoicePlay("G020240002_02_000");
MsgDisp("Sassa","It's beautiful but......");
MsgDisp("主人公","Yeah, what is it?");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G020240002_02_010");
MsgDisp("Sassa","Have you heard that the fireflies light
resembles 'disembodied souls'...... you
know, like the ghostly flames?");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,3);
VoicePlay("G020240002_02_020");
MsgDisp("Sassa","I don't think it seems alike at all?");
MsgDisp("主人公","Hehe, are you perhaps......");
ChEye(2,5);
ChMouth(2,5);
ChMotion(2,5);
VoicePlay("G020240002_02_030");
MsgDisp("Sassa","No way!
It's not scary at all!");
ChEye(2,5);
ChMouth(2,0);
ChMotion(2,5);
VoicePlay("G020240002_02_040");
MsgDisp("Sassa","Besides that, if these were all
disembodied souls, I wonder how many
people that would be?");
MsgDisp("主人公","It would be quite crowded for sure.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G020240002_02_050");
MsgDisp("Sassa","Right? It'd be a super popular spot.
Thinking of it that way, it's not so
scary.");
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,2);
ChEyeOpenLevel(2,7);
VoicePlay("G020240002_02_060");
MsgDisp("Sassa","......No. After all if so many of them
were here......");
MsgDisp("主人公","(Seeing that ｛颯砂＊＊｝ is scared of
ghosts is kind of cute......?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
