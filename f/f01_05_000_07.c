ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,254,4,4,4,#1,#1,0,0);
    VoicePlay("F010500007_05_000");
    MsgDisp("Hiiragi","Somehow, I had a feeling you would come.
When I was just standing there.");
    MsgDisp("主人公","Oh, how cool!");
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("F010500007_05_010");
    MsgDisp("Hiiragi","It is not a coincidence, but an 
opportunity.
How about we walk together?");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,254,5,0,3,#1,#1,0,0);
    VoicePlay("F010500007_05_020");
    MsgDisp("Hiiragi","Just in time... at last...");
    MsgDisp("主人公","Oh, ｛柊＊＊＊｝.
What's wrong?");
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("F010500007_05_030");
    MsgDisp("Hiiragi","In truth, I wanted to walk with you,
so I decided to wait for five people
to come out.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgSel("Sure. Let's go together.","How about a cafe?","Sorry, I'm busy.");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        VoicePlay("F010500007_05_040");
        MsgDisp("Hiiragi","In that case, shall we go?");
        break ;
        case 4:
        case 5:
        ChEye(5,3);
        ChMouth(5,3);
        ChMotion(5,3);
        VoicePlay("F010500007_05_050");
        MsgDisp("Hiiragi","That is fine.
Let us be off.");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(5,3);
        ChMouth(5,4);
        VoicePlay("F010500007_05_060");
        MsgDisp("Hiiragi","Thank you for inviting me.
Let us be off.");
        break ;
        case 4:
        case 5:
        ChEye(5,4);
        ChMouth(5,3);
        ChMotion(5,3);
        VoicePlay("F010500007_05_070");
        MsgDisp("Hiiragi","I see no reason to decline.
That is an lovely idea.");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(5,4);
        ChMouth(5,0);
        ChMotion(5,0);
        VoicePlay("F010500007_05_080");
        MsgDisp("Hiiragi","Ah, my apologies. 
It was a bad time. Another time, then.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(5);
        MsgDisp("主人公","(After he went to the trouble of calling
out to me, I did a bad thing...)");
        break ;
        case 4:
        case 5:
        ChEye(5,2);
        ChMouth(5,2);
        ChMotion(5,2);
        ChEyeOpenLevel(5,8);
        VoicePlay("F010500007_05_090");
        MsgDisp("Hiiragi","I should have known from your expression.
My apologies.");
        MsgDisp("主人公","Okay...sorry?");
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,0);
        ChEyeOpenLevel(5,#1);
        VoicePlay("F010500007_05_100");
        MsgDisp("Hiiragi","Do not be.
I am sorry that I made you decline,
too.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(5);
        MsgDisp("主人公","(After he went to the trouble of calling
out to me, I did a bad thing...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
