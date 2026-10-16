<!DOCTYPE html>
<html lang="mr">
<head>
    <meta charset="UTF-8">
    <title>वीज बिल - Bill of Supply</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <div class="bill-container">
        <!-- ===== HEADER ===== -->
        <div class="bill-header">
            <div class="left-header">
                <div class="msedcl-mark">⚡ महावितरण</div>
                <div class="company-detail">
                    <p><strong>महाराष्ट्र राज्य विद्युत वितरण कंपनी मर्यादित</strong></p>
                    <p>Maharashtra State Electricity Distribution Co. Ltd.</p>
                    <p class="gstin">GSTIN: 27AAACM3033K1ZR</p>
                </div>
            </div>
            <div class="right-header">
                <p><strong>बिल ऑफ सप्लाय / BILL OF SUPPLY</strong></p>
                <p>महिन्याकरिता: <strong>एप्रिल - २०२५</strong></p>
                <div class="barcode">▮▮▯▮▯▯▮▮▯▮▯▮▯▮▮▯▮▯▮</div>
            </div>
        </div>

        <!-- ===== CONSUMER DETAILS ===== -->
        <div class="consumer-section">
            <div class="consumer-row">
                <div class="field"><span class="label">ग्राहक क्रमांक:</span> <span class="value">43100272318</span></div>
                <div class="field"><span class="label">बिल क्रमांक:</span> <span class="value">1204202531</span></div>
            </div>
            <div class="consumer-row">
                <div class="field"><span class="label">ग्राहकाचे नाव:</span> <span class="value">श्री. ताराबाई वामन भानारकर</span></div>
                <div class="field"><span class="label">देय तारीख:</span> <span class="value">०५/०५/२०२५</span></div>
            </div>
            <div class="consumer-row">
                <div class="field full"><span class="label">पत्ता:</span> <span class="value">भानारकरवाडी, आरळे-४२९१, ता. ब्रह्मपुरी, जि. चंद्रपूर - ४४२४०२</span></div>
            </div>
            <div class="consumer-row">
                <div class="field"><span class="label">वीज पुरवठा क्र.:</span> <span class="value">43110006242331031</span></div>
                <div class="field"><span class="label">स्थिती:</span> <span class="value">Normal</span></div>
            </div>
        </div>

        <!-- ===== BILL DETAILS TABLE ===== -->
        <table class="bill-table">
            <thead>
                <tr>
                    <th>तपशील</th>
                    <th>मागील वाचन</th>
                    <th>सध्याचे वाचन</th>
                    <th>वापर (युनिट)</th>
                    <th>दर (₹)</th>
                    <th>रक्कम (₹)</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td><strong>१. वीज आकार</strong></td>
                    <td>1404</td><td>1468</td><td>64</td><td>6.05</td><td>387.20</td>
                </tr>
                <tr>
                    <td>२. निश्चित आकार</td>
                    <td colspan="3">-</td><td>-</td><td>100.00</td>
                </tr>
                <tr>
                    <td>३. विद्युत शुल्क (16%)</td>
                    <td colspan="3">-</td><td>16%</td><td>77.95</td>
                </tr>
                <tr>
                    <td>४. वीज आकार (FAC)</td>
                    <td colspan="3">-</td><td>0.20</td><td>12.80</td>
                </tr>
                <tr>
                    <td>५. कर व उपकर</td>
                    <td colspan="3">-</td><td>-</td><td>25.40</td>
                </tr>
                <tr class="total-row">
                    <td colspan="5"><strong>एकूण देय रक्कम</strong></td>
                    <td><strong>₹ 603.35</strong></td>
                </tr>
            </tbody>
        </table>

        <div class="amount-words">
            <span class="label">अक्षरी रक्कम:</span>
            <span class="value">रुपये सहाशे तीन फक्त / Rupees Six Hundred Three Only</span>
        </div>

        <!-- ===== METER + GRAPH SECTION ===== -->
        <div class="meter-section">
            <div class="meter-box">
                <h4>मीटर तपशील</h4>
                <p><strong>मीटर क्रमांक:</strong> 03857821</p>
                <p><strong>मीटर प्रकार:</strong> 3-Phase, 10-60A</p>
                <p><strong>वाचन तारीख:</strong> ०४/०४/२०२५</p>
                <p><strong>मागील वाचन तारीख:</strong> ०६/०३/२०२५</p>
                <p><strong>वापर दिवस:</strong> ३०</p>
                <p><strong>गुणक (MF):</strong> 1.00</p>
            </div>

            <!-- ✅ MONTHLY UNITS GRAPH (Photo jaisa) -->
            <div class="meter-box">
                <h4>मासिक वीज वापर (युनिट)</h4>
                <div class="graph-container">
                    <div class="y-axis">
                        <span>100</span><span>80</span><span>60</span><span>40</span><span>20</span><span>0</span>
                    </div>
                    <div class="graph-bars">
                        <div class="bar-wrapper">
                            <div class="bar" style="height:45px;"><span class="bar-value">४५</span></div>
                            <span class="bar-label">नोव्हें</span>
                        </div>
                        <div class="bar-wrapper">
                            <div class="bar" style="height:55px;"><span class="bar-value">५५</span></div>
                            <span class="bar-label">डिसें</span>
                        </div>
                        <div class="bar-wrapper">
                            <div class="bar" style="height:64px;"><span class="bar-value">६४</span></div>
                            <span class="bar-label">जाने</span>
                        </div>
                        <div class="bar-wrapper">
                            <div class="bar" style="height:50px;"><span class="bar-value">५०</span></div>
                            <span class="bar-label">फेब्रु</span>
                        </div>
                        <div class="bar-wrapper">
                            <div class="bar" style="height:78px;"><span class="bar-value">७८</span></div>
                            <span class="bar-label">मार्च</span>
                        </div>
                        <div class="bar-wrapper">
                            <div class="bar" style="height:62px; background:linear-gradient(to top,#8b0000,#ffcb2c);"><span class="bar-value">६२</span></div>
                            <span class="bar-label active">एप्रिल</span>
                        </div>
                    </div>
                </div>
                <p class="graph-note">टीप: मागील ६ महिन्यांचा वापर</p>
            </div>
        </div>

        <!-- ===== PAYMENT OPTIONS ===== -->
        <div class="payment-info">
            <h4>देयक भरणा पर्याय</h4>
            <div class="payment-grid">
                <div class="pay-option"><p>📱 <strong>UPI / QR Code</strong></p><p>महावितरण ॲप वापरून स्कॅन करा</p></div>
                <div class="pay-option"><p>🌐 <strong>ऑनलाइन</strong></p><p>www.mahadiscom.in</p></div>
                <div class="pay-option"><p>🏢 <strong>कार्यालय</strong></p><p>जवळच्या महावितरण कार्यालयात</p></div>
                <div class="pay-option"><p>🏦 <strong>बँक / CSC</strong></p><p>अधिकृत केंद्रावर</p></div>
            </div>
            <p class="late-warning">⚠️ देय तारखेनंतर ₹ 25 प्रति महिना विलंब शुल्क.</p>
        </div>

        <!-- ===== FOOTER ===== -->
        <div class="bill-footer">
            <div class="qr-box">
                <div class="qr-placeholder">▦▦▦<br>▦▦▦<br>▦▦▦</div>
                <p>QR स्कॅन करा</p>
            </div>
            <div class="helpline-box">
                <p><strong>24x7 हेल्पलाइन:</strong> 1912</p>
                <p><strong>ईमेल:</strong> helpline@mahadiscom.in</p>
                <p><strong>वेबसाइट:</strong> www.mahadiscom.in</p>
            </div>
            <div class="stamp-box">
                <p>जारी दिनांक: १०/०४/२०२५</p>
                <p class="stamp">MAHADISCOM</p>
            </div>
        </div>

        <div class="print-actions">
            <button onclick="window.print()" class="msedcl-btn">🖨️ प्रिंट करा</button>
            <a href="index.html" class="msedcl-btn secondary">← मागे जा</a>
        </div>
    </div>
</body>
</html>
