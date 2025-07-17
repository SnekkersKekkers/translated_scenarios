MsgClose();
ChOpen(5,255,0,0,4,#1,#1,0,0);
VoicePlay("G020510001_05_000");
MsgDisp("Hiiragi","Speaking of which, I was asked about you
in the student council a bit ago.");
ChMotion(5,4);
VoicePlay("G020510001_05_010");
MsgDisp("Hiiragi","They asked, 'Is she your
girlfriend?'...");
MsgDisp("主人公","Ehhh∋");
ChEye(5,2);
ChEyeOpenLevel(5,9);
VoicePlay("G020510001_05_020");
MsgDisp("Hiiragi","...Are you really that surprised?");
MsgDisp("主人公","Well, how did you answer?");
ChEye(5,0);
ChMotion(5,0);
ChEyeOpenLevel(5,#1);
VoicePlay("G020510001_05_030");
MsgDisp("Hiiragi","I said I don't know. Even when I asked him
what kind of person a girlfriend is, he
didn't give me a definite answer.");
MsgDisp("主人公","I-I see...");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("G020510001_05_040");
MsgDisp("Hiiragi","When it comes to you, what kind of person
do you think a girlfriend is?");
MsgDisp("主人公","Ehh∋
Even if you ask me that so suddenly...");
ChMotion(5,4);
VoicePlay("G020510001_05_050");
MsgDisp("Hiiragi","Did I put you on the spot?...
Then, let's put this discussion on hold.");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("G020510001_05_060");
MsgDisp("Hiiragi","The student council also has a pending
box, so let's put this there");
MsgDisp("主人公","(I wonder what ｛柊＊＊＊｝ is
intending to write and post in the pending
box...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
