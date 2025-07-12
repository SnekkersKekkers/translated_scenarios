BGOpen("ar600",0);
MsgClose();
ChOpen(3,35,0,0,0,#1,#1,0,0);
BGMPlay("BGM_C03_HONDA_A");
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_330");
    MsgDisp("Honda","......Hm?
Do you know what happened to the box
that was here?");
    MsgDisp("主人公","Ah, I opened it and
put the contents on the shelf.");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("I260300000_03_340");
    MsgDisp("Honda","Huh?
Didn't I mention that those books
were going to be returned?");
    MsgDisp("主人公","Ah...... now that you mention it.
I'm sorry!");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_350");
    MsgDisp("Honda","No, I should've written it
on the box. Sorry.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_360");
    MsgDisp("Honda","But, sorry, could you help
me put it all back into the box?");
    MsgDisp("主人公","Y, yes.");
    MsgDisp("主人公","(Even though I've done returns
so many times, I still made a rookie
mistake......)");
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_370");
    MsgDisp("Honda","Hey, did you finish organizing
the shelves that I asked you to?");
    MsgDisp("主人公","......Ah, I'll do them now!");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_380");
    MsgDisp("Honda","Ah, it's fine, I'll do it.");
    MsgDisp("主人公","I'm sorry.
The register was so busy......");
    ChMotion(3,4,1);
    VoicePlay("I260300000_03_390");
    MsgDisp("Honda","There's no helping it
if you were busy. But, just tell me
sooner next time.");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_400");
    MsgDisp("Honda","Don't try to do everything yourself,
and ask someone if you need help.
Okay?");
    MsgDisp("主人公","......Yes.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_410");
    MsgDisp("Honda","Well, I was too enthusiastic when
I first started working part-time, too,
and ended up running in circles.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChEye(3,0);
ChMouth(3,3);
VoicePlay("I260300000_03_420");
MsgDisp("Honda","Well, I'm going to go
organize the shelves!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(3);
MsgClose();
MsgDisp("主人公","(I can't forget how I started......
I'll have to be careful.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
