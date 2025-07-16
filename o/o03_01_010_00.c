switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(What should I do about my partner......)");
    VoicePlay("O030101000_44_000");
    MsgDisp("School Girl A","Kazama-kun, where are you?");
    VoicePlay("O030101000_45_000");
    MsgDisp("School Girl B","He's probably been taken by someone else
already.
Let's give up, okay?");
    MsgDisp("主人公","(Taken......?
｛風真＊＊｝ sure is popular.)");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(1,30,0,0,0,#1,#1,0,0);
    VoicePlay("O030101000_01_000");
    MsgDisp("Kazama","There you are.
Hurry, let's tie our legs together.");
    MsgDisp("主人公","Huh, ｛風真＊＊｝!?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("O030101000_01_010");
    MsgDisp("Kazama","What?");
    MsgDisp("主人公","Um......
Isn't it too early to tie our legs?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O030101000_01_020");
    MsgDisp("Kazama","It's fine, it'll be good practice.
Anyways, let's win this.");
    MsgDisp("主人公","Y-Yeah.
Let's do our best!");
    break ;
    case 3:
    MsgDisp("主人公","(What should I do about my partner......)");
    VoicePlay("O030101000_44_010");
    MsgDisp("School Girl A","Kazama-kun was walking around here......");
    VoicePlay("O030101000_45_010");
    MsgDisp("School Girl B","Yeah, let's look around some more.");
    MsgDisp("主人公","(Looks like everyone wants to be in the
three-legged race with
｛風真＊＊｝.)");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(1,30,0,0,2,#1,#1,0,0);
    VoicePlay("O030101000_01_030");
    MsgDisp("Kazama","So you were over here.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝. Everyone's
looking for you, you know? Seems like they
want to be your partner,
｛風真＊＊｝.");
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("O030101000_01_040");
    MsgDisp("Kazama","Haa?
I'd only partner with you.
Don't tell me you have someone else?");
    MsgDisp("主人公","No, I don't have a partner yet.");
    ChEyeOpenLevel(1,0);
    Wait(8,0);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O030101000_01_050");
    MsgDisp("Kazama","Then take me.
Come on, let's tie our legs together.");
    MsgDisp("主人公","Huh?
Already?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O030101000_01_060");
    MsgDisp("Kazama","It'll be easier to tell that we're
partners that way, right?");
    MsgDisp("主人公","Y-Yeah.");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(What should I do about my partner......)");
    VoicePlay("O030101000_44_020");
    MsgDisp("School Girl A","Ah, Kazama-kun.
Do you want to do the three-legged race
with me?");
    VoicePlay("O030101000_01_070");
    MsgDisp("Kazama?","Sorry, I already have a partner.");
    VoicePlay("O030101000_44_030");
    MsgDisp("School Girl A","Someone else already got you～
Too bad.");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(1,30,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(1);
    VoicePlay("O030101000_01_080");
    MsgDisp("Kazama","｛主人公｝.
Do you prefer the left or right?");
    MsgDisp("主人公","Hm, ｛風真＊＊｝?
Um...... what do you mean?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("O030101000_01_090");
    MsgDisp("Kazama","What do I mean?
The three-legged race.
About which leg to start with.");
    MsgDisp("主人公","But, ｛風真＊＊｝, you already
have a partner......");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("O030101000_01_100");
    MsgDisp("Kazama","Yeah, I do.
I've had you for the past 10 years.");
    MsgDisp("主人公","Ah...... hehe, I see.
Looking forward to it!");
    ChEyeOpenLevel(1,0);
    Wait(8,0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O030101000_01_110");
    MsgDisp("Kazama","Let's show them the difference experience
makes.
As a veteran team.");
    MsgDisp("主人公","Yeah.
Let's do our best to aim for first!");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O030101000_01_120");
    MsgDisp("Kazama","Let's tie our legs now, then?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
