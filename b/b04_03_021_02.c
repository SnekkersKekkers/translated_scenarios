BGOpen("wf210",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,2);
ChMotion(3,1,1);
ScrFadeIn(0);
VoicePlay("B040302102_03_000");
MsgDisp("Honda","Hm?
That person we just passed, I think I know
them from somewhere...");
MsgSel("A friend of yours?","I haven't passed by anyone...","Maybe they were looking at ｛本多＊＊｝?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,0,1);
        VoicePlay("B040302102_03_010");
        MsgDisp("Honda","No.
I don't have that many friends.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,0,1);
        VoicePlay("B040302102_03_020");
        MsgDisp("Honda","I don't think so.
I don't have that many friends.");
        ChEye(3,0);
        ChMouth(3,2);
        ChMotion(3,0,1);
        MsgDisp("主人公","Really?
You don't give off that impression.");
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,0,1);
        VoicePlay("B040302102_03_030");
        MsgDisp("Honda","Really? I guess I have started talking
more with everyone since entering high
school though. I didn't talk much in
junior high.");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,0,1);
        MsgDisp("主人公","Is that so?");
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,2,1);
        VoicePlay("B040302102_03_040");
        MsgDisp("Honda","Yeah, back then I was always reading
books. Well, I guess that hasn't changed
even now.");
        ChEye(3,0);
        ChMouth(3,2);
        ChMotion(3,0,1);
        VoicePlay("B040302102_03_050");
        MsgDisp("Honda","So what's changed then...?");
        ChEye(3,5);
        ChMouth(3,5);
        ChMotion(3,5,1);
        VoicePlay("B040302102_03_060");
        MsgDisp("Honda","Ah.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,0,1);
        MsgDisp("主人公","Hm?");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,0,1);
        VoicePlay("B040302102_03_070");
        MsgDisp("Honda","It's you, for sure.
Because something I didn't have in junior
high, and something I have now - it's you.");
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,4,1);
        ChCheek(3,5);
        VoicePlay("B040302102_03_080");
        MsgDisp("Honda","I haven't changed at all, but the
difference between having you and not
having you is immense.");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,0,1);
        ChCheek(3,0);
        MsgDisp("主人公","I haven't done anything though?");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3,1);
        VoicePlay("B040302102_03_090");
        MsgDisp("Honda","If you can do this without doing anything,
just imagine what it'll be like when you
do something.");
        ChEye(3,1);
        ChMouth(3,4);
        ChLayout(0);
        VoicePlay("B040302102_03_100");
        MsgDisp("Honda","Hey, can you try it?");
        MsgDisp("主人公","Try what?");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,5,1);
        ChLayout(1);
        VoicePlay("B040302102_03_110");
        MsgDisp("Honda","...what I wonder?");
        MsgDisp("主人公","(｛本多＊＊｝, is there something you want
me to do?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5,1);
    VoicePlay("B040302102_03_120");
    MsgDisp("Honda","Eh∋
Does that mean I saw something I wasn't
supposed to?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("B040302102_03_130");
    MsgDisp("Honda","Recently I've been getting approached by
children, but not so much by adults.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
