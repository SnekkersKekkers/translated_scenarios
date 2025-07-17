MsgClose();
BGOpen("sc500",1);
BGMPlay("BGM_C04_NANA_A");
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(4);
VoicePlay("G110400500_04_000");
MsgDisp("Nanatsumori","｛主人公｝.");
MsgDisp("主人公","Ah, ｛七ツ森＊｝.
What's up?");
VoicePlay("G110400500_04_010");
MsgDisp("Nanatsumori","Did you plan to come by Cafe Alucard
today?");
MsgDisp("主人公","?");
MsgClose();
ScrFadeOut(0);
ChClose(4);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_DOOR_014");
BGOpen("ar100",0);
ScrFadeIn(0);
VoicePlay("G110400500_34_000");
MsgDisp("Clerk","Welcome.");
MsgDisp("主人公","Ah, I was meeting up with someone...");
VoiceEVSPlay(4);
VoicePlay("G110400500_04_020");
MsgDisp("Nanatsumori?","｛主人公｝, over here.");
SEStop("EV_SE_DOOR_014");
MsgClose();
ScrFadeOut(0);
MsgClose();
BGOpen("ev004",0);
ChNanaType(1);
ChOpen(4,100,1,0,0,#1,#1,0,0);
BGMVol(0.5,2);
ScrFadeIn(0);
VoicePlay("G110400500_04_030");
MsgDisp("Nanatsumori","My bad.
I didn't mean to make this hang out so
last minute.");
MsgDisp("主人公","Don't worry about it.
What did you want to talk about?");
ChEye(4,1);
ChMotion(4,0);
VoicePlay("G110400500_04_040");
MsgDisp("Nanatsumori","Well...
It was kind of hard to say this at school.");
ChMotion(4,1);
VoicePlay("G110400500_04_050");
MsgDisp("Nanatsumori","You've changed a lot recently.");
MsgDisp("主人公","Huh, I didn't know.
... Howcome?");
ChEye(4,1);
ChMouth(4,1);
ChMotion(4,0);
VoicePlay("G110400500_04_060");
MsgDisp("Nanatsumori","Well...");
MsgDisp("主人公","(｛七ツ森＊｝, what do you mean by that...)");
while (1){
    RunEverydaySksp(4,0,0,1,0,0);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    VoicePlay("G110400500_04_080");
    ChEye(4,0);
    ChMouth(4,2);
    ChMotion(4,1);
    MsgDisp("Nanatsumori","Are you worried?
I don't know what to do...");
    }
VoicePlay("G110400500_04_070");
ChEye(4,1);
ChMouth(4,2);
ChMotion(4,1);
MsgDisp("Nanatsumori","Okay, I figured out how to say it!
Jeez...");
VoicePlay("G110400500_04_090");
ChEye(4,1);
ChMouth(4,1);
ChMotion(4,1);
ChCheek(4,5);
MsgDisp("Nanatsumori","You're the ideal type, you know?");
MsgDisp("主人公","Huh?");
VoicePlay("G110400500_04_100");
ChMouthOpenLevel(4,0);
MsgDisp("Nanatsumori","......");
VoicePlay("G110400500_04_110");
ChEye(4,1);
ChMouth(4,2);
ChMotion(4,2);
MsgDisp("Nanatsumori","Ah, my bad!
I didn't mean to talk while standing,
let's go take a seat here.");
MsgDisp("主人公","(Am I ｛七ツ森＊｝'s ideal
type?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
