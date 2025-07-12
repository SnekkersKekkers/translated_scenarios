BGMStop();
BGOpen("sc743",0);
ChLayout(1);
MsgClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChEye(3,1);
ChMouth(3,4);
ChMotion(3,0,1);
BGMPlay("BGM_ENGEKI_C",0.01);
ScrFadeIn(0,60);
VoicePlay("P240300000_03_000");
MsgDisp("Honda","On this occasion, 
Araki Murashige-dono has rebelled.
We must urge him to change his mind.");
MsgDisp("主人公","Are we even able to do such a thing?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
VoicePlay("P240300000_03_010");
MsgDisp("Honda","It'll be most difficult.
However, that's what makes it fun.");
MsgDisp("主人公","?
But what about you if you fail?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("P240300000_03_020");
MsgDisp("Honda","But our failure hasn't been decided,
has it?");
MsgDisp("主人公","(S-Somewhat...... He's returned to being
the usual ｛本多＊＊｝∋)");
ChEye(3,1);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("P240300000_03_030");
MsgDisp("Honda","... Someone must carry out Nobunaga-sama's
orders.");
MsgDisp("主人公","But,
why must it be you who does it?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("P240300000_03_040");
MsgDisp("Honda","Who is the one who can resolve any
dilemma... In this country?");
SEPlay("EV_SE_GAYA_008",0,0.7);
Wait(90,0);
MsgDisp("主人公","(Come on, he's become ｛本多＊＊｝ again!)");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1,1);
SEStop("EV_SE_GAYA_008",1);
VoicePlay("P240300000_03_050");
MsgDisp("Honda","...Ahem.
You don't understand, Mitsu.");
MsgDisp("主人公","I-I don't understand.
Mitsu is terribly sorry, 
but she doesn't understand.");
ChEye(3,1);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("P240300000_03_060");
MsgDisp("Honda","Above all, if Araki-dono rebels here,
Hideyoshi-dono, who is in the midst of
attacking the Mori clan, will be trapped
in a predicament.");
ChEye(3,1);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("P240300000_03_070");
MsgDisp("Honda","There is no other than Kuroda Kanbei.");
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
StlOpen("ev_03_15");
StlEye(3,0);
StlMouth(3,0);
ScrFadeIn(0);
VoicePlay("P240300000_03_080");
MsgDisp("Honda","Then, I'm off.");
MsgDisp("主人公","Please promise me this.
That you'll definitely return.");
StlEye(3,1);
StlMouth(3,1);
VoicePlay("P240300000_03_090");
MsgDisp("Honda","Oh, I promise. That no matter what
happens, this Kuroda Kanbei Yoshitaka,
will return to you, Mitsuhime!");
StlEye(3,1,0);
StlMouth(3,0);
StlEyeOpenLevel(3,5,1);
VoicePlay("P240300000_03_100");
MsgDisp("Honda","No matter what form I take...");
MsgDisp("主人公","Yes...
Kanbei-sama...");
MsgClose();
SEPlay("EV_SE_GAYA_021");
SEPlay("EV_SE_CLAP_002");
SEPlay("EV_SE_CLAP_004",0,0.5);
BGMStop(2);
ScrFadeOut(0);
StlClose();
MsgClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEStop("EV_SE_CLAP_002",1.5);
SEStop("EV_SE_CLAP_004",1.5);
SEStop("EV_SE_GAYA_021",1.5);
BGOpen("sc740",0);
ChOpen(3,38,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Phew... it ended without any issues.");
ChFace(3,3);
ChMotion(3,1,1);
ChEyeOpenLevel(3,0);
VoicePlay("P240300000_03_110");
MsgDisp("Honda","Yeah, it was a huge success!");
MsgDisp("主人公","Hey, didn't you revert back to your 
usual self during the play?");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,2,1);
VoicePlay("P240300000_03_120");
MsgDisp("Honda","Yeah, actually I was going to play
Kuroda Kabei like myself, but I stopped 
since you glared at me scarily.");
MsgDisp("主人公","Geez... I really wondered what was going
to happen.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("P240300000_03_130");
MsgDisp("Honda","I went through all the trouble of coming
up with an original idea, though.
And it's an interesting one.");
ChSet(3,3);
VoicePlay("P240300000_03_140");
MsgDisp("Honda","That's right, let's continue with the two
of us! Our own school play! Ah, should we
borrow these costumes too?");
MsgDisp("主人公","(Hehe, that seems kind of fun?
Seems like the play was a success, 
that's good!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
ChPrmTblAdd(3,0);
