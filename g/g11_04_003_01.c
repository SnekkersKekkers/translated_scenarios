EnvAutoSet(0);
BGOpen("fp100",1);
EnvPlay("SE_ENV_BG_FP100_SP1",1);
ScrFadeIn(0);
MsgDisp("主人公","(It seems the park is full of women.
The city streets are beautiful too...)");
MsgDisp("主人公","Now, where should I go next?");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
EnvAutoSet(1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ne100",1);
ScrFadeIn(0);
MsgDisp("主人公","Phew...
That should be enough for today.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_DOOR_014");
BGOpen("ar100",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'll organize my notes over some tea.)");
VoicePlay("G110400301_04_000");
VoiceEVSPlay(4);
MsgDisp("Nanatsumori?","Oh, ｛主人公｝.");
SEStop("EV_SE_DOOR_014");
MsgClose();
ScrFadeOut(0);
MsgClose();
BGMPlay("BGM_C04_NANA_A");
BGOpen("ev004",0);
ChNanaType(1);
ChOpen(4,100,1,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛七ツ森＊｝!
Are you working right now?");
VoicePlay("G110400301_04_010");
MsgDisp("Nanatsumori","Yeah, I'm almost done for the day.
I just wanted a bite to eat.");
MsgDisp("主人公","I see.
Well, are you about to leave then?");
ChEye(4,0);
ChMouth(4,2);
VoicePlay("G110400301_04_020");
MsgDisp("Nanatsumori","Do you want me to leave?");
MsgDisp("主人公","Huh?");
VoicePlay("G110400301_04_030");
MsgDisp("Nanatsumori","Ms.
Habatcher's newest reporter.
Nana is now available.");
MsgDisp("主人公","Hehe!
Are you letting me do an interview then?");
ChMotion(4,2);
VoicePlay("G110400301_04_040");
MsgDisp("Nanatsumori","Let me think.
As long as I can give you a review of what
I just ate.");
MsgDisp("主人公","I'm sure Nana-kun's fans would be
overjoyed!");
ChEye(4,1);
ChMouth(4,1);
VoicePlay("G110400301_04_050");
MsgDisp("Nanatsumori","Don't...don't take it so seriously.
It was a joke.");
MsgDisp("主人公","(He was groaning with his eyes...)");
while (1){
    RunEverydaySksp(4,0,1,0,0,0);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    BGMVol(0.5,2);
    VoicePlay("G110400301_04_070");
    MsgDisp("Nanatsumori","I don't know if I just do that naturally
or if I'm good at acting...");
    }
VoicePlay("G110400301_04_060");
ChMouth(4,2);
ChCheek(4,5);
MsgDisp("Nanatsumori","I haven't eaten enough to do a review...");
MsgDisp("主人公","Hehe, was that just a joke then too?");
VoicePlay("G110400301_04_080");
ChEye(4,1);
ChMouth(4,1);
ChMotion(4,0);
MsgDisp("Nanatsumori","Oof...touche.");
MsgDisp("主人公","(Hehe! It would be interesting to write an
article about this conversation with
｛七ツ森＊｝!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
