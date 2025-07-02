ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ChCheek(1,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
ChCheek(4,0);
VoicePlay("D140B06001_01_000");
MsgDisp("Kazama","Hey, what's up with Honda?");
MsgDisp("主人公","Eh?
I don't know but...");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("D140B06001_01_010");
MsgDisp("Kazama","I see.");
ChEye(1,0);
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,0,1);
VoicePlay("D140B06001_04_000");
MsgDisp("Nanatsumori","Dahon, what are you doing?");
MsgDisp("主人公","？");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("D140B06001_01_020");
MsgDisp("Kazama","This is bugging me,
...damn it.");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,1,1);
VoicePlay("D140B06001_04_010");
MsgDisp("Nanatsumori","Well, maybe it's still 
too early for him. Love, that is.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("D140B06001_01_030");
MsgDisp("Kazama","I guess.
Even if he understands what love is, 
he feels inexperienced with love.");
MsgDisp("主人公","Hey.
What were you two whispering 
about just now?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("D140B06001_01_040");
MsgDisp("Kazama","It's nothing much.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("D140B06001_04_020");
MsgDisp("Nanatsumori","I see...
It looks like they're both dense.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("D140B06001_01_050");
MsgDisp("Kazama","...Otherwise, it wouldn't have
turned out like this.");
MsgDisp("主人公","(I heard \"dense\" but... are they talking
about me and ｛本多＊＊｝?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
ChClose(4,0,0);
