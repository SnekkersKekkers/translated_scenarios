MsgClose();
ChOpen(5,255,0,4,4,#1,#1,0,0);
VoicePlay("G020510305_05_000");
MsgDisp("Hiiragi","Ancient people likened these fleeting, yet
beautiful lights to the souls of the
departed.");
MsgDisp("主人公","It's beautiful, although that's a little
scary...");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("G020510305_05_010");
MsgDisp("Hiiragi","You used to be unfond of these kinds of
stories...
But beautiful things are fleeting.");
MsgDisp("主人公","Y-Yeah.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("G020510305_05_020");
MsgDisp("Hiiragi","That's why I think when something is made
beautiful to the extreme, it inevitably
includes a sense of fear.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("G020510305_05_030");
MsgDisp("Hiiragi","So, I don't want to do things halfway.");
MsgDisp("主人公","U...
Ummm?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("G020510305_05_040");
MsgDisp("Hiiragi","Remember before, at the haunted
house...");
MsgDisp("主人公","Ahh!
｛柊＊＊＊｝, you were teaching
the ghost actor all sorts of things.");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,2);
ChEyeOpenLevel(5,0);
VoicePlay("G020510305_05_050");
MsgDisp("Hiiragi","Yes, I find ghosts to be beautiful
entities.
Perhaps I went a bit overboard.");
ChEyeOpenLevel(5,8);
MsgDisp("主人公","That ghost seemed really into it though,
so thanks to you, ｛柊＊＊＊｝
that ghost might be even scarier than is
was.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(12,0);
ChEyeOpenLevel(5,#1);
VoicePlay("G020510305_05_060");
MsgDisp("Hiiragi","If that were true, I'd be happy.
Shall we go check it out again sometime?");
MsgDisp("主人公","(If ｛柊＊＊＊｝ were the one
producing it, it would be super
scary...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
