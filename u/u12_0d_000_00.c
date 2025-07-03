StlEye(21,0);
StlMouth(21,0);
StlEye(22,0);
StlMouth(22,1);
StlCheek(22,0);
VoicePlay("U120D00000_22_000");
MsgDisp("Hikaru","Is it okay, Mari?
Can you tell Hikaru the truth from deep 
down in your heart?");
MsgDisp("主人公","Huh?
Um, sure.");
VoicePlay("U120D00000_22_010");
MsgDisp("Hikaru","Is there a boy that Mari is
interested in right now?");
MsgClose();
MsgSel("Yes, there is…","Nope, not yet…","I'm embarrassed…");
switch (MsgSelRsltGet()){
    case 0:
    case 1:
    case 2:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
