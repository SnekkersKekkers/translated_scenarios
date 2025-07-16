BGOpen("wf400",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(......
Huh?
The event hall is packed......)");
MsgDisp("主人公","(\"Charity Auction Ongoing!\" , huh......
Wow, it's free to enter!)");
VoicePlay("D010100600_31_000");
MsgDisp("Goro?","You, wait a minute.");
MsgClose();
BGMPlay("BGM_C31_GORO_A",0.01);
ChOpen(31,254,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Ah, Goro-sensei!");
ChEye(31,4);
ChMouth(31,4);
ChMotion(31,3);
VoicePlay("D010100600_31_010");
MsgDisp("Goro","Yeah, it's exactly as I thought.");
MsgDisp("主人公","? Uhm, what do you mean......?");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,2);
VoicePlay("D010100600_31_020");
MsgDisp("Goro","Geez, if you worry like that, you won't
get anything done!");
ChEye(31,3);
ChMouth(31,3);
ChMotion(31,5);
VoicePlay("D010100600_31_030");
MsgDisp("Goro","Make haste, alright, ＧＯ～∈");
MsgDisp("主人公","Y......
Yes!");
BGMStop();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
MsgClose();
ScrFadeOut(0,0);
ChClose(31,0,0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(30,0);
MsgDisp("主人公","(Haa, that surprised me. But I managed to
get to the auction in time. I wonder
what's happening here......?)");
VoicePlay("D010100600_01_000");
MsgDisp("Kazama?","——Charity Auction Catalog: Collection
Number 1");
MsgDisp("主人公","(Huh?
That voice, that's......)");
StlOpen("ev_01_13");
StlEye(1,0);
StlMouth(1,0);
BGMPlay("BGM_C01_RYOUTA_I",0.01);
ScrFadeIn(0);
VoicePlay("D010100600_01_010");
MsgDisp("Kazama","A champaigne glass designed by Mr.
Goro Hanatsubaki.");
MsgDisp("主人公","(Eh......
Ehh∋
｛風真＊＊｝∋ )");
VoicePlay("D010100600_01_020");
MsgDisp("Kazama","Goro Hanatsubaki is a world famous fashion
designer.");
MsgDisp("Kazama","This is a great piece that beautifully
showcases his talents.");
StlEyeOpenLevel(1,5);
VoicePlay("D010100600_01_030");
MsgDisp("Kazama","We will open at 300 Rich.
Please raise your paddle if you have an
interest in purchasing it.");
MsgDisp("主人公","(Wow, ｛風真＊＊｝ is amazing.
Even with so many guests......
He's doing such a great job!)");
StlEyeOpenLevel(1,#1);
VoicePlay("D010100600_01_040");
MsgDisp("Kazama","525 Rich going once...... 525 Rich going
twice. Is there anyone else who would like
to bid?");
StlEye(1,1);
StlMouthOpenLevel(1,0);
VoicePlay("D010100600_01_050");
MsgDisp("Kazama","......!");
StlEyeOpenLevel(1,5);
StlMouthOpenLevel(1,#1);
MsgDisp("主人公","(Ah......
Did our eyes meet just now?)");
StlEye(1,0);
SEPlay("EV_SE_605",0,0.9);
SEWait();
VoicePlay("D010100600_01_060");
MsgDisp("Kazama","That's the hammer price.");
BGMStop(2);
MsgClose();
ScrFadeOut(0,0);
StlClose();
Wait(50,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc010",1);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,0,2,#1,#1,0,0);
BGMPlay("BGM_C01_RYOUTA_D",0.2,0.6);
ScrFadeIn(0);
MsgDisp("主人公","Ahh, that surprised me......");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,3);
ChEyeOpenLevel(1,0);
VoicePlay("D010100600_01_070");
MsgDisp("Kazama","That's my line.");
ChEyeOpenLevel(1,#1);
MsgDisp("主人公","Hehe, come to think of it, we made eye
contact once in there, didn't we?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("D010100600_01_080");
MsgDisp("Kazama","Don't \"Hehe\" me.
That one moment almost made me break
character back to my usual self.");
MsgDisp("主人公","Sorry.
You were really amazing though.");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("D010100600_01_090");
MsgDisp("Kazama","Even though it's a charity, they selected
me, a highschooler of all people.");
MsgDisp("Kazama","Because my dad used to do this......");
MsgDisp("主人公","I see. Well maybe in the future,
｛風真＊＊｝, you can be just
like your dad——");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D010100600_01_100");
MsgDisp("Kazama","I don't want to.
Everyone says that.
But I'm different from him.");
MsgDisp("主人公","Eh?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("D010100600_01_110");
MsgDisp("Kazama","I just did it today because it was for
charity. But I didn't really enjoy the
auction all that much.");
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("D010100600_01_120");
MsgDisp("Kazama","Because, you know. I think everything has
a proper value. I don't like it when
things are under or overpriced.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D010100600_01_130");
MsgDisp("Kazama","...... It's getting late already.
Let's go.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(1);
MsgDisp("主人公","(｛風真＊＊｝, did something happen between
you and your dad......?)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(1,0);
