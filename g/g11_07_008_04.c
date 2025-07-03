BGOpen("sc500",0);
ScrFadeIn(0);
MsgDisp("主人公","(That's right. I have to weed the
gardening club's field, don't I?)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgClose();
BGOpen("ev007",0);
BGMPlay("BGM_C07_MIKAGE_A");
ChOpen(7,100,2,0,0,-1,-1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(7);
VoicePlay("G110700804_07_000");
MsgDisp("Mikage","｛主人公｝,
You've come to the right place.
Please help me with weeding.");
MsgDisp("主人公","Yes.
Then, I'll start from the other side.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700804_07_010");
MsgDisp("Mikage","Oh, please do.
You're in high spirits today.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700804_07_020");
MsgDisp("Mikage","If that's the case...... I guess you don't
dislike this kind of work?");
MsgDisp("主人公","Yes. Weeds and insects are proof of
organic farming, aren't they?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700804_07_030");
MsgDisp("Mikage","Oh......
You've grown before I knew it!");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G110700804_07_040");
MsgDisp("Mikage","Phew......
Don't make me cry so much......");
MsgDisp("主人公","(Ehh∋ tears in ｛御影＊＊｝'s
eyes......?)");
BGMVol(0.5,2);
while (1){
    RunEverydaySksp(7,0,1,1,0,0);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    VoicePlay("G110700804_07_070");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    MsgDisp("Mikage","Oh, are you trying to console me?");
    }
VoicePlay("G110700804_07_050");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
MsgDisp("Mikage","That really makes me cry happy tears.");
MsgDisp("主人公","Hehe.
Are you really crying?");
VoicePlay("G110700804_07_080");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
MsgDisp("Mikage","That's right. 
Who do you think made me cry?");
MsgDisp("主人公","(Yay, ｛御影＊＊｝ praised me! I'm glad I
worked hard in the gardening club.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
