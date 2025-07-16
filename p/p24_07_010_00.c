BGMStop();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("sc740",0);
BGMPlay("BGM_ENGEKI_G",0.01);
MsgClose();
ChOpen(7,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("P240701000_07_000");
MsgDisp("Mikage","How is it?
Do you think it'll somehow come out okay?");
MsgDisp("主人公","The set also seems to be fine.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("P240701000_07_010");
MsgDisp("Mikage","Alright, this is the last scene.");
MsgDisp("主人公","Yes.
Everyone, give it your best...!");
BGMVol(0.5,2);
MsgClose();
ScrFadeOut(0);
ChClose(7);
BGOpen("sc744",0);
ScrFadeIn(0);
VoicePlay("P240701000_49_000");
MsgDisp("Narrator","Searching for his missing wife, Bai Niang,
Xu Xian waited tirelessly by the lake.");
VoicePlay("P240701000_46_000");
MsgDisp("White Girl","I am the incarnation of a thousand
year-old white snake.
You and I cannot live in the same age.");
VoicePlay("P240701000_41_020");
MsgDisp("Xu Xian","Even if that is so, I will take you home.");
MsgDisp("主人公","...This is a lovely scene, huh?");
VoicePlay("P240701000_07_020");
MsgDisp("Mikage","Well yeah.
I don't think it's right to forcefully
bring her back though?");
MsgDisp("主人公","Eh?");
VoicePlay("P240701000_46_010");
MsgDisp("White Girl","If I were to return, the pursuers would go
after both you and yoru family.");
VoicePlay("P240701000_41_040");
MsgDisp("Xu Xian","What meaning is there in meekly allowing
time to pass when you aren't there?");
VoicePlay("P240701000_07_030");
MsgDisp("Mikage","...That hurts to hear.");
MsgDisp("主人公","? It's almost time for the sound effects.");
VoicePlay("P240701000_33_050");
MsgDisp("Fahai","Don't mingle with humans, you demon!");
VoicePlay("P240701000_41_060");
MsgDisp("Xu Xian","It's dangerous!");
VoicePlay("P240701000_33_070");
MsgDisp("Fahai","Ehhh∈");
VoicePlay("P240701000_07_040");
MsgDisp("Mikage","Alright, now!");
SEPlay("EV_SE_735",0,0.8);
SEWait();
MsgDisp("主人公","That was spot on.");
VoicePlay("P240701000_07_050");
MsgDisp("Mikage","Yes, the backstage team were also greatly
successful.");
MsgDisp("主人公","Yeah!");
VoicePlay("P240701000_49_010");
MsgDisp("Narrator","The lightning arrows sent by the pursuers
pierced through Bai Niang's back.");
VoicePlay("P240701000_46_020");
MsgDisp("White Girl","This is... fine.
I can finally experience the same time you
do.");
VoicePlay("P240701000_41_100");
MsgDisp("Xu Xian","Don't go...!
Don't leave me behind.");
BGMStop();
SEPlay("EV_SE_GAYA_021");
MsgClose();
ScrFadeOut(0);
Wait(180,0);
MsgClose();
SEStop("EV_SE_GAYA_021",1.5);
BGOpen("sc740",0);
ChOpen(7,254,3,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("P240701000_07_060");
MsgDisp("Mikage","Good work!
Wasn't that perfect?");
SEStop("EV_SE_GAYA_021",3);
MsgDisp("主人公","Yes!");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,4);
VoicePlay("P240701000_07_070");
MsgDisp("Mikage","Then, let's gather everyone and celebrate!
Let's go!");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
MsgDisp("主人公","(Hehe, looks like
｛御影＊＊｝ is the
happiest? He's helped us a lot since the
preparation period.)");
MsgClose();
ScrFadeOut(0,0);
